# Copyright (c) 2006 by Brandon J. Van Every under MIT-style license.
# See LICENSE section at end of file for full license text.

# This was written to work with nsample, which tested different
# stack sizes for performance.  This code proved that nsample
# was a substandard method for determining ideal stack sizes.
#
# In particular, the stack size should not be determined at
# build time, because most users will not treat their build as
# a controlled benchmark environment.  Rather, they'll start
# their build, put it in the background, go check their e-mail,
# play a game, etc.  This makes any benchmark samples completely
# meaningless.
#
# This code is left in /benchmarks in case anyone wants to reuse
# the design.  It is not working, usable code as nsample is now gone.
# It should be rewritten as a Scheme benchmark, with some new
# interface that allows different stack sizes to be tested.


# -D inputs:
#   Chicken_SOURCE_DIR
#   NSAMPLE_EXE
#   DEFAULT_TARGET_STACK_SIZE
#
# outputs:
#   ${CMAKE_CURRENT_BINARY_DIR}/stack-size.h


####################################################################
#  DEFAULT_TARGET_STACK_SIZE                                       #
####################################################################

IF(NSAMPLE_EXE)
  MESSAGE(STATUS "Attempting to find a better stack size than the default.
    Will overwrite ${CMAKE_CURRENT_BINARY_DIR}/stack-size.h with the results.
    Warning: DO NOT MULTITASK YOUR MACHINE
    Repeat: DO NOT MULTITASK YOUR MACHINE
    If you do, your stack size results will ***SERIOUSLY SUCK***
  ")

  # For each possible nursery size, sample it SAMPLES times.
  # Then take the average of the samples.  We need a fair
  # number of samples to get a meaningful average.  Trials
  # on the command line show that samples can vary by as much
  # as 100 ms.  3 samples is definitely too low, the results
  # are pretty random.

  # 100 samples slows the build times enough to be noticeably
  # painful, but in the general case I see no alternative.
  # Initial sampling reports are showing 15% variances in the
  # same runs at 10 samples, so that's clearly not enough.
  # We need to use a consistent metric that will work on all
  # machines.  If 100 samples isn't good enough, then
  # nsample itself isn't good enough, and will have to be
  # either reworked or scrapped.

  SET(SAMPLES 100)
  MESSAGE(STATUS "Running ${SAMPLES} samples per given stack size.")

  # Actually it's really bad design to have this benchmark be
  # driven by a script.  To much overhead in process invocation.
  # Should look at nsample.scm, loop the sampling there, and
  # also see if better system timers are available.

  # Another problem: the values returned don't have many digits
  # of precision once divided.  So we multiply by 1000 to get
  # more precision in the average.

  # Finally, on my box, I've seen no evidence that nsample
  # averaged over many runs produces significantly different
  # results, no matter what the stack size.  Granted, my box
  # is not everyone's box, and different results may be seen
  # in the wild.  As a precautionary, I'm setting a
  # NOISE_THRESHOLD.  This is a percent improvement over the
  # DEFAULT_TARGET_STACK_SIZE performance that must be
  # observed before a different stack size will be used.
  # This will prevent meaningless fluctuations in stack size
  # due to minor noise... IF nsample itself is sufficiently
  # stable for the sample size.

  SET(NOISE_THRESHOLD 5)  # the % of improvement required
  MESSAGE(STATUS "Requiring a ${NOISE_THRESHOLD}% performance improvement to override the default stack size.")

  MACRO(NSAMPLE_LOOP bytes_in lowest1000_out average1000_out highest1000_out)
    # Need a big number to initialize lowest1000.  Try 1 billion.
    # Hope CMake doesn't have any funky numerical limits!
    SET(lowest1000 1000000000)
    SET(highest1000 0)
    SET(total1000 0)
    MESSAGE(STATUS "stack size ${${bytes_in}} bytes ->")
    FOREACH(i RANGE 1 ${SAMPLES})
      # The stack size is given in bytes, so use -s:${n}, not -s:${n}k !
      EXECUTE_PROCESS(COMMAND ${NSAMPLE_EXE} -s:${${bytes_in}}
        OUTPUT_VARIABLE t)
      MATH(EXPR t1000 "${t} * 1000") # For extra precision
      IF(t1000 LESS lowest1000)
        SET(lowest1000 "${t1000}")
       ENDIF(t1000 LESS lowest1000)
      IF(t1000 GREATER highest1000)
        SET(highest1000 "${t1000}")
      ENDIF(t1000 GREATER highest1000)
      MATH(EXPR total1000 "${total1000} + ${t1000}")
    ENDFOREACH(i)
    MATH(EXPR average1000 "${total1000} / ${SAMPLES}")

    MATH(EXPR low_int "${lowest1000} / 1000")
    MATH(EXPR low_fract "${lowest1000} - 1000 * ${low_int}")   
    MESSAGE(STATUS "lowest  ${low_int}.${low_fract} ms")
    MATH(EXPR avg_int "${average1000} / 1000")
    MATH(EXPR avg_fract "${average1000} - 1000 * ${avg_int}")
    MESSAGE(STATUS "average ${avg_int}.${avg_fract} ms")
    MATH(EXPR hi_int "${highest1000} / 1000")
    MATH(EXPR hi_fract "${highest1000} - 1000 * ${hi_int}")
    MESSAGE(STATUS "highest ${hi_int}.${hi_fract} ms")

    SET(${lowest1000_out} ${lowest1000})
    SET(${average1000_out} ${average1000})
    SET(${highest1000_out} ${highest1000})
  ENDMACRO(NSAMPLE_LOOP)

  MESSAGE(STATUS "Testing the default stack size")
  NSAMPLE_LOOP(DEFAULT_TARGET_STACK_SIZE default_low default_average default_high)
  
  MESSAGE(STATUS "Testing other stack sizes")
  # Try different K sizes
  SET(stack_sizes_in_kilobytes
    16 24 32 48 64 128 256 512 1024)
  FOREACH(n ${stack_sizes_in_kilobytes})
    MATH(EXPR bytes "1024 * ${n}")
    LIST(APPEND stack_sizes_in_bytes ${bytes})
  ENDFOREACH(n)
  # Don't include the DEFAULT_TARGET_STACK_SIZE
  LIST(REMOVE_ITEM stack_sizes_in_bytes ${DEFAULT_TARGET_STACK_SIZE})

  SET(best_time ${default_average})
  SET(best_size ${DEFAULT_TARGET_STACK_SIZE})
  FOREACH(bytes ${stack_sizes_in_bytes})
    NSAMPLE_LOOP(bytes low average high)
    # Only increase the nursery size if the timing is
    # NOISE_THRESHOLD percent better than the previous timing.
    IF(average LESS best_time)
      MATH(EXPR percent_improvement
        "((${best_time} - ${average}) * 100) / ${best_time}")
      IF(NOT percent_improvement LESS NOISE_THRESHOLD)
        SET(best_time ${average})
        SET(best_size ${bytes})
      ENDIF(NOT percent_improvement LESS NOISE_THRESHOLD)
    ENDIF(average LESS best_time) 
  ENDFOREACH(bytes)

  IF(best_time LESS default_average)
    MATH(EXPR percent
      "((${default_average} - ${best_time}) * 100) / ${default_average}")
    SET(DEFAULT_TARGET_STACK_SIZE ${best_size})
    MESSAGE(STATUS "Using a stack size of ${best_size} bytes.
      It shows a ${percent}% performance improvement over the default stack size.")
  ELSE(best_time LESS default_average)
     MESSAGE(STATUS "Cannot gain a ${NOISE_THRESHOLD}% performance improvement over the default stack size.
       Using the default stack size of ${DEFAULT_TARGET_STACK_SIZE} bytes.")
  ENDIF(best_time LESS default_average)

ELSE(NSAMPLE_EXE)
  MESSAGE(STATUS "nsample not found.  Using default stack size of ${DEFAULT_TARGET_STACK_SIZE} bytes.")
ENDIF(NSAMPLE_EXE)

# Put STACK_GROWS_DOWNWARD into stack-size.h
FILE(READ ${Chicken_SOURCE_DIR}/stack-size.h.in input)
STRING(CONFIGURE "${input}" input)
FILE(WRITE ${CMAKE_CURRENT_BINARY_DIR}/stack-size.h "${input}")


####################################################################
#   LICENSE                                                        #
####################################################################

# Copyright (c) 2006 by Brandon J. Van Every
# 
# Permission is hereby granted, free of charge, to any person obtaining
# a copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
# IN THE SOFTWARE.
