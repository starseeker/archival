MACRO(TK_SCRIPTS_BUILD files destination)
  FOREACH(file ${${files}})
    get_filename_component(filename ${file} NAME)
    if(NOT CMAKE_CONFIGURATION_TYPES)
      configure_file(${file} ${CMAKE_BINARY_DIR}/${destination}/${filename} COPYONLY)
    else(NOT CMAKE_CONFIGURATION_TYPES)
      foreach(CFG_TYPE ${CMAKE_CONFIGURATION_TYPES})
        string(TOUPPER "${CFG_TYPE}" CFG_TYPE_UPPER)
        configure_file(${file} ${CMAKE_BINARY_DIR_${CFG_TYPE_UPPER}}/${destination}/${filename} COPYONLY)
      endforeach(CFG_TYPE ${CMAKE_CONFIGURATION_TYPES})
    endif(NOT CMAKE_CONFIGURATION_TYPES)
  ENDFOREACH(file ${${files}})
ENDMACRO(TK_SCRIPTS_BUILD)

SET(TK_LIBRARY_FILES
  bgerror.tcl
  button.tcl
  choosedir.tcl
  clrpick.tcl
  comdlg.tcl
  console.tcl
  dialog.tcl
  entry.tcl
  focus.tcl
  listbox.tcl
  menu.tcl
  mkpsenc.tcl
  msgbox.tcl
  obsolete.tcl
  optMenu.tcl
  palette.tcl
  panedwindow.tcl
  safetk.tcl
  scale.tcl
  scrlbar.tcl
  spinbox.tcl
  tearoff.tcl
  text.tcl
  tk.tcl
  tkfbox.tcl
  unsupported.tcl
  xmfbox.tcl
  tclIndex
  )
install(FILES ${TK_LIBRARY_FILES} DESTINATION lib/tk${TK_VERSION_MAJOR}.${TK_VERSION_MINOR})
TK_SCRIPTS_BUILD(TK_LIBRARY_FILES lib/tk${TK_VERSION_MAJOR}.${TK_VERSION_MINOR})

SET(TK_LIBRARY_IMAGE_FILES
  images/README
  images/logo.eps
  images/logo100.gif
  images/logo64.gif
  images/logoLarge.gif
  images/logoMed.gif
  images/pwrdLogo.eps
  images/pwrdLogo100.gif
  images/pwrdLogo150.gif
  images/pwrdLogo175.gif
  images/pwrdLogo200.gif
  images/pwrdLogo75.gif
  images/tai-ku.gif
  )
install(FILES ${TK_LIBRARY_IMAGE_FILES} DESTINATION lib/tk${TK_VERSION_MAJOR}.${TK_VERSION_MINOR}/images)
TK_SCRIPTS_BUILD(TK_LIBRARY_IMAGE_FILES lib/tk${TK_VERSION_MAJOR}.${TK_VERSION_MINOR}/images)

SET(TK_LIBRARY_MSG_FILES
  msgs/cs.msg
  msgs/de.msg
  msgs/el.msg
  msgs/en.msg
  msgs/en_gb.msg
  msgs/eo.msg
  msgs/es.msg
  msgs/fr.msg
  msgs/hu.msg
  msgs/it.msg
  msgs/nl.msg
  msgs/pl.msg
  msgs/pt.msg
  msgs/ru.msg
  )
install(FILES ${TK_LIBRARY_MSG_FILES} DESTINATION lib/tk${TK_VERSION_MAJOR}.${TK_VERSION_MINOR}/msgs)
TK_SCRIPTS_BUILD(TK_LIBRARY_MSG_FILES lib/tk${TK_VERSION_MAJOR}.${TK_VERSION_MINOR}/msgs)

SET(TK_DEMO_PROGS
  demos/browse
  demos/hello
  demos/ixset
  demos/rmt
  demos/rolodex
  demos/tcolor
  demos/timer
  demos/widget
  )
INSTALL(PROGRAMS ${TK_DEMO_PROGS} DESTINATION lib/tk${TK_VERSION_MAJOR}.${TK_VERSION_MINOR}/demos)
TK_SCRIPTS_BUILD(TK_DEMO_PROGS lib/tk${TK_VERSION_MAJOR}.${TK_VERSION_MINOR}/demos)

SET(TK_DEMO_FILES
	demos/arrow.tcl
	demos/bind.tcl
	demos/bitmap.tcl
	demos/button.tcl
	demos/check.tcl
	demos/clrpick.tcl
	demos/colors.tcl
	demos/cscroll.tcl
	demos/ctext.tcl
	demos/dialog1.tcl
	demos/dialog2.tcl
	demos/entry1.tcl
	demos/entry2.tcl
	demos/entry3.tcl
	demos/filebox.tcl
	demos/floor.tcl
	demos/form.tcl
	demos/hscale.tcl
	demos/icon.tcl
	demos/image1.tcl
	demos/image2.tcl
	demos/items.tcl
	demos/labelframe.tcl
	demos/label.tcl
	demos/menubu.tcl
	demos/menu.tcl
	demos/msgbox.tcl
	demos/paned1.tcl
	demos/paned2.tcl
	demos/plot.tcl
	demos/puzzle.tcl
	demos/radio.tcl
	demos/ruler.tcl
	demos/sayings.tcl
	demos/search.tcl
	demos/spin.tcl
	demos/states.tcl
	demos/style.tcl
	)
INSTALL(FILES ${TK_DEMO_FILES} DESTINATION lib/tk${TK_VERSION_MAJOR}.${TK_VERSION_MINOR}/demos)
TK_SCRIPTS_BUILD(TK_DEMO_FILES lib/tk${TK_VERSION_MAJOR}.${TK_VERSION_MINOR}/demos)

SET(TK_DEMO_IMAGES
	demos/images/earth.gif
	demos/images/earthris.gif
	demos/images/face.bmp
	demos/images/flagdown.bmp
	demos/images/flagup.bmp
	demos/images/gray25.bmp
	demos/images/letters.bmp
	demos/images/noletter.bmp
	demos/images/pattern.bmp
	demos/images/tcllogo.gif
	demos/images/teapot.ppm
  )
INSTALL(FILES ${TK_DEMO_IMAGES} DESTINATION lib/tk${TK_VERSION_MAJOR}.${TK_VERSION_MINOR}/demos/images)
TK_SCRIPTS_BUILD(TK_DEMO_IMAGES lib/tk${TK_VERSION_MAJOR}.${TK_VERSION_MINOR}/demos/images)
