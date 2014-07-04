# -*- Makefile -*-

CPT_DIR = ../../src/cpt

CXXINCLUDE  = -I../../src
LINKERFLAGS += -L$(CPT_DIR)

#CXXFLAGS    += -pg
# Only use with the C++ interface.
#CXXFLAGS    += -DCPT_PERFORMANCE
#CXXFLAGS    += -DSTLIB_DEBUG -DDEBUG_ads -DSTLIB_DEBUG

include Makefile.compilers

SOURCES = $(wildcard *.cc)
DEPENDENCIES = $(SOURCES:.cc=.d)
TARGETS = $(SOURCES:.cc=.exe) cpt3_c.exe cpt2_c.exe cpt3_f.exe cpt2_f.exe 

.SUFFIXES:
.SUFFIXES: .cc .d .o .exe

default: cpt2.exe cpt3.exe
all: $(TARGETS)

cpt3.exe: cpt3.cc cpt3.d $(CPT_DIR)/performance.cc
	$(CXX) $(CXXFLAGS) $(LINKERFLAGS) -o $@ cpt3.cc $(CPT_DIR)/performance.cc

cpt2.exe: cpt2.cc cpt2.d
	$(CXX) $(CXXFLAGS) $(LINKERFLAGS) -o $@ cpt2.cc

cpt2s.exe: cpt2.cc cpt2.d
	$(CXX) $(CXXFLAGS) $(LINKERFLAGS) -DCPT_SINGLE_PRECISION -o $@ cpt2.cc


cpt3_c.exe: cpt3.cc cpt3.d
	$(CXX) $(CXXFLAGS) -DC_INTERFACE $(LINKERFLAGS) -o $@ cpt3.cc -lcpt

cpt2_c.exe: cpt2.cc cpt2.d
	$(CXX) $(CXXFLAGS) -DC_INTERFACE $(LINKERFLAGS) -o $@ cpt2.cc -lcpt


cpt3_f.exe: cpt3.cc cpt3.d
	$(CXX) $(CXXFLAGS) -DFORTRAN_INTERFACE $(LINKERFLAGS) -o $@ cpt3.cc -lcpt

cpt2_f.exe: cpt2.cc cpt2.d
	$(CXX) $(CXXFLAGS) -DFORTRAN_INTERFACE $(LINKERFLAGS) -o $@ cpt2.cc -lcpt


inside3.exe: inside3.cc inside3.d 
	$(CXX) $(CXXFLAGS) $(LINKERFLAGS) -o $@ inside3.cc

inside2.exe: inside2.cc inside2.d 
	$(CXX) $(CXXFLAGS) $(LINKERFLAGS) -o $@ inside2.cc


clean: 
	$(RM) *.o *~ core* *.stackdump

distclean: 
	$(MAKE) clean 
	$(RM) $(TARGETS) $(DEPENDENCIES)

again: 
	$(MAKE) distclean 
	$(MAKE) 

# Implicit rules.

.cc.d: 
	$(CXX) -MM $(CXXINCLUDE) $< > $@.$$$$; \
  sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
  $(RM) $@.$$$$

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(MAKECMDGOALS),distclean)
-include $(DEPENDENCIES)
endif
endif
