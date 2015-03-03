#ADD_SUBDIRECTORY(tzdata)

MACRO(TCL_SCRIPTS_BUILD files destination)
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
ENDMACRO(TCL_SCRIPTS_BUILD)

SET(tcl_library_toplevel
  auto.tcl
  history.tcl
  init.tcl
  package.tcl
  parray.tcl
  safe.tcl
  word.tcl
  tclIndex
  )
INSTALL(FILES ${tcl_library_toplevel} DESTINATION lib/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR})
TCL_SCRIPTS_BUILD(tcl_library_toplevel lib/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR})

SET(tcl_library_http1
  http1.0/http.tcl
  http1.0/pkgIndex.tcl
  )
INSTALL(FILES ${tcl_library_http1} DESTINATION lib/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR}/http1.0)
TCL_SCRIPTS_BUILD(tcl_library_http1 lib/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR}/http1.0)

SET(tcl_library_opt04
  opt/optparse.tcl
  opt/pkgIndex.tcl
  )
INSTALL(FILES ${tcl_library_opt04} DESTINATION lib/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR}/opt0.4)
TCL_SCRIPTS_BUILD(tcl_library_opt04 lib/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR}/opt0.4)

INSTALL(FILES http/http.tcl DESTINATION lib/tcl8/8.4 RENAME http-2.7.5.tm)
INSTALL(FILES platform/platform.tcl DESTINATION lib/tcl8/8.4 RENAME platform-1.0.9.tm)
INSTALL(FILES platform/shell.tcl DESTINATION lib/tcl8/8.4/platform RENAME shell-1.1.4.tm)
INSTALL(FILES msgcat/msgcat.tcl DESTINATION lib/tcl8/8.5 RENAME msgcat-1.4.3.tm)
INSTALL(FILES tcltest/tcltest.tcl DESTINATION lib/tcl8/8.5 RENAME tcltest-2.3.2.tm)

if(CMAKE_CONFIGURATION_TYPES)
   foreach(CFG_TYPE ${CMAKE_CONFIGURATION_TYPES})
     string(TOUPPER "${CFG_TYPE}" CFG_TYPE_UPPER)
     configure_file(${CMAKE_CURRENT_SOURCE_DIR}/http/http.tcl ${CMAKE_BINARY_DIR_${CFG_TYPE_UPPER}}/lib/tcl8/8.4/http-2.7.5.tm COPYONLY)
     configure_file(${CMAKE_CURRENT_SOURCE_DIR}/platform/platform.tcl ${CMAKE_BINARY_DIR_${CFG_TYPE_UPPER}}/lib/tcl8/8.4/platform-1.0.9.tm COPYONLY)
     configure_file(${CMAKE_CURRENT_SOURCE_DIR}/platform/shell.tcl ${CMAKE_BINARY_DIR_${CFG_TYPE_UPPER}}/lib/tcl8/8.4/platform/shell-1.1.4.tm COPYONLY)
     configure_file(${CMAKE_CURRENT_SOURCE_DIR}/msgcat/msgcat.tcl ${CMAKE_BINARY_DIR_${CFG_TYPE_UPPER}}/lib/tcl8/8.5/msgcat-1.4.3.tm COPYONLY)
     configure_file(${CMAKE_CURRENT_SOURCE_DIR}/tcltest/tcltest.tcl ${CMAKE_BINARY_DIR_${CFG_TYPE_UPPER}}/lib/tcl8/8.5/tcltest-2.3.2.tm COPYONLY)
   endforeach(CFG_TYPE ${CMAKE_CONFIGURATION_TYPES})
else(CMAKE_CONFIGURATION_TYPES)
   configure_file(${CMAKE_CURRENT_SOURCE_DIR}/http/http.tcl ${CMAKE_BINARY_DIR}/lib/tcl8/8.4/http-2.7.5.tm COPYONLY)
   configure_file(${CMAKE_CURRENT_SOURCE_DIR}/platform/platform.tcl ${CMAKE_BINARY_DIR}/lib/tcl8/8.4/platform-1.0.9.tm COPYONLY)
   configure_file(${CMAKE_CURRENT_SOURCE_DIR}/platform/shell.tcl ${CMAKE_BINARY_DIR}/lib/tcl8/8.4/platform/shell-1.1.4.tm COPYONLY)
   configure_file(${CMAKE_CURRENT_SOURCE_DIR}/msgcat/msgcat.tcl ${CMAKE_BINARY_DIR}/lib/tcl8/8.5/msgcat-1.4.3.tm COPYONLY)
   configure_file(${CMAKE_CURRENT_SOURCE_DIR}/tcltest/tcltest.tcl ${CMAKE_BINARY_DIR}/lib/tcl8/8.5/tcltest-2.3.2.tm COPYONLY)
endif(CMAKE_CONFIGURATION_TYPES)
	
IF(NOT WIN32)
  INSTALL(FILES ../unix/tclAppInit.c DESTINATION lib/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR})
ELSE(NOT WIN32)
  INSTALL(FILES ../win/tclAppInit.c DESTINATION lib/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR})
ENDIF(NOT WIN32)

SET(tcl_encoding
  encoding/ascii.enc
  encoding/big5.enc
  encoding/cp1250.enc
  encoding/cp1251.enc
  encoding/cp1252.enc
  encoding/cp1253.enc
  encoding/cp1254.enc
  encoding/cp1255.enc
  encoding/cp1256.enc
  encoding/cp1257.enc
  encoding/cp1258.enc
  encoding/cp437.enc
  encoding/cp737.enc
  encoding/cp775.enc
  encoding/cp850.enc
  encoding/cp852.enc
  encoding/cp855.enc
  encoding/cp857.enc
  encoding/cp860.enc
  encoding/cp861.enc
  encoding/cp862.enc
  encoding/cp863.enc
  encoding/cp864.enc
  encoding/cp865.enc
  encoding/cp866.enc
  encoding/cp869.enc
  encoding/cp874.enc
  encoding/cp932.enc
  encoding/cp936.enc
  encoding/cp949.enc
  encoding/cp950.enc
  encoding/dingbats.enc
  encoding/ebcdic.enc
  encoding/euc-cn.enc
  encoding/euc-jp.enc
  encoding/euc-kr.enc
  encoding/gb12345.enc
  encoding/gb1988.enc
  encoding/gb2312-raw.enc
  encoding/gb2312.enc
  encoding/iso2022-jp.enc
  encoding/iso2022-kr.enc
  encoding/iso2022.enc
  encoding/iso8859-1.enc
  encoding/iso8859-10.enc
  encoding/iso8859-13.enc
  encoding/iso8859-14.enc
  encoding/iso8859-15.enc
  encoding/iso8859-16.enc
  encoding/iso8859-2.enc
  encoding/iso8859-3.enc
  encoding/iso8859-4.enc
  encoding/iso8859-5.enc
  encoding/iso8859-6.enc
  encoding/iso8859-7.enc
  encoding/iso8859-8.enc
  encoding/iso8859-9.enc
  encoding/jis0201.enc
  encoding/jis0208.enc
  encoding/jis0212.enc
  encoding/koi8-r.enc
  encoding/koi8-u.enc
  encoding/ksc5601.enc
  encoding/macCentEuro.enc
  encoding/macCroatian.enc
  encoding/macCyrillic.enc
  encoding/macDingbats.enc
  encoding/macGreek.enc
  encoding/macIceland.enc
  encoding/macJapan.enc
  encoding/macRoman.enc
  encoding/macRomania.enc
  encoding/macThai.enc
  encoding/macTurkish.enc
  encoding/macUkraine.enc
  encoding/shiftjis.enc
  encoding/symbol.enc
  encoding/tis-620.enc
  )
INSTALL(FILES ${tcl_encoding} DESTINATION lib/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR}/encoding)
TCL_SCRIPTS_BUILD(tcl_encoding lib/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR}/encoding)
