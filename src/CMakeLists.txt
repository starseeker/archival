include_directories(
  ${X11_X11_INCLUDE_PATH}
  ${OPENGL_INCLUDE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/other/tcl8.4.20/generic
  ${CMAKE_CURRENT_SOURCE_DIR}/other/tk8.4.20/generic
  ${CMAKE_CURRENT_SOURCE_DIR}/togl
  ${CMAKE_CURRENT_SOURCE_DIR}/contrib
  ${CMAKE_CURRENT_SOURCE_DIR}
  )

set(AYAM_SRCS
  aycore/bbc.c
  aycore/clear.c
  aycore/clevel.c
  aycore/clipb.c
  aycore/comp.c
  aycore/convert.c
  aycore/draw.c
  aycore/error.c
  aycore/geom.c
  aycore/instt.c
  aycore/interpol.c
  aycore/notify.c
  aycore/ns.c
  aycore/oact.c
  aycore/object.c
  aycore/otype.c
  aycore/matt.c
  aycore/pact.c
  aycore/pomesht.c
  aycore/prop.c
  aycore/provide.c
  aycore/prefs.c
  aycore/pv.c
  aycore/quat.c
  aycore/read.c
  aycore/riattr.c
  aycore/riopt.c
  aycore/sdmesht.c
  aycore/sel.c
  aycore/selp.c
  aycore/shade.c
  aycore/shader.c
  aycore/table.c
  aycore/tags.c
  aycore/tc.c
  aycore/tcmd.c
  aycore/tgui.c
  aycore/toglcb.c
  aycore/tmp.c
  aycore/trafo.c
  aycore/undo.c
  aycore/vact.c
  aycore/viewt.c
  aycore/wrib.c
  aycore/write.c
  nurbs/act.c
  nurbs/bevelt.c
  nurbs/capt.c
  nurbs/ict.c
  nurbs/ipt.c
  nurbs/knots.c
  nurbs/nb.c
  nurbs/nct.c
  nurbs/npt.c
  nurbs/pmt.c
  nurbs/stess.c
  nurbs/tess.c
  objects/acurve.c
  objects/bevel.c
  objects/birail1.c
  objects/birail2.c
  objects/box.c
  objects/bpatch.c
  objects/camera.c
  objects/cap.c
  objects/clone.c
  objects/cone.c
  objects/concatnc.c
  objects/concatnp.c
  objects/cylinder.c
  objects/disk.c
  objects/extrnc.c
  objects/extrnp.c
  objects/extrude.c
  objects/gordon.c
  objects/hyperb.c
  objects/icurve.c
  objects/instance.c
  objects/ipatch.c
  objects/level.c
  objects/light.c
  objects/material.c
  objects/ncircle.c
  objects/ncurve.c
  objects/npatch.c
  objects/offnc.c
  objects/offnp.c
  objects/pamesh.c
  objects/pomesh.c
  objects/parab.c
  objects/revolve.c
  objects/riinc.c
  objects/riproc.c
  objects/root.c
  objects/script.c
  objects/sdmesh.c
  objects/select.c
  objects/sphere.c
  objects/skin.c
  objects/sweep.c
  objects/swing.c
  objects/torus.c
  objects/trim.c
  objects/text.c
  objects/view.c
  contrib/ai.c
  contrib/sm.c
  contrib/tree.c
  contrib/tti.c
  contrib/objsel.c
  ${MF3D_SRCS}
  contrib/meta/metaobj.c
  contrib/meta/metautils.c
  contrib/meta/move.c
  contrib/meta/marching.c
  contrib/meta/adaptive.c
  #affine/src/write.c
  #affine/src/constant.c
  plugins/csphere.c
  plugins/sfcurve.c
  plugins/idr.c
  #plugins/rrib.c
  togl/togl.c
  ayam.c
  )

add_executable(ayam ${AYAM_SRCS})
target_link_libraries(ayam ${TIFF_LIBRARY} ${X11_LIBRARIES} ${X11_Xmu_LIB} ${X11_Xext_LIB} ${OPENGL_glu_LIBRARY} ${OPENGL_gl_LIBRARY} ${TCL_LIBRARY} ${TK_LIBRARY} ${M_LIBRARY} ${CMAKE_THREAD_LIBS_INIT})


#install(TARGETS ayam
#  RUNTIME DESTINATION ${BIN_DIR}
#  LIBRARY DESTINATION ${LIB_DIR}
#  ARCHIVE DESTINATION ${LIB_DIR})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8

