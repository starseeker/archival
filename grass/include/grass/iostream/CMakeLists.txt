set(iostream_hdrs
  ami_config.h
  ami.h
  ami_sort.h
  ami_sort_impl.h
  ami_stream.h
  embuffer.h
  empq_adaptive.h
  empq_adaptive_impl.h
  empq.h
  empq_impl.h
  imbuffer.h
  mem_stream.h
  minmaxheap.h
  mm.h
  mm_utils.h
  pqheap.h
  queue.h
  quicksort.h
  replacementHeapBlock.h
  replacementHeap.h
  rtimer.h
  )

install(FILES ${iostream_hdrs} DESTINATION ${INCLUDE_DIR}/grass/iostream)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8

