#ADD_SUBDIRECTORY(tzdata)

MACRO(TCL_SCRIPTS_BUILD files destination)
	FOREACH(file ${${files}})
		get_filename_component(filename ${file} NAME)
		configure_file(${file} ${CMAKE_BINARY_DIR}/${destination}/${filename} COPYONLY)
	ENDFOREACH(file ${${files}})
ENDMACRO(TCL_SCRIPTS_BUILD)

SET(tcl_library_toplevel
	auto.tcl
	clock.tcl
	history.tcl
	init.tcl
	package.tcl
	parray.tcl
	safe.tcl
	tm.tcl
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

SET(single_tcl_scripts
	platform/platform.tcl
	platform/shell.tcl
	msgcat/msgcat.tcl
	tcltest/tcltest.tcl
	http/http.tcl
	)

FOREACH(ITEM ${single_tcl_scripts})
	get_filename_component(ITEM_NAME ${ITEM} NAME)
	STRING(REGEX REPLACE "\\.tcl" "" ROOT_NAME ${ITEM_NAME})
	FILE(READ ${ITEM} ITEM_CONTENTS)
	STRING(REGEX REPLACE "^#[^\r\n]*" "" ITEM_CONTENTS ${ITEM_CONTENTS})
	SET(ITEM_SUBDIR "")
	SET(ITEM_VERSION "")
	SET(ITEM_TCL_VERSION "")
	FOREACH(line ${ITEM_CONTENTS})
		IF(${line} MATCHES "package provide [^:]*::${ROOT_NAME}")
			STRING(REGEX REPLACE ".*package provide ([^:]*)::.*" "\\1" ITEM_SUBDIR ${line})
			STRING(REGEX REPLACE ".*package provide [^:]*::${ROOT_NAME} ([0-9\\.]*).*" "\\1" ITEM_VERSION ${line})
		ENDIF(${line} MATCHES "package provide [^:]*::${ROOT_NAME}")
		IF(${line} MATCHES "package provide ${ROOT_NAME}")
			STRING(REGEX REPLACE ".*package provide ${ROOT_NAME} ([0-9\\.]*).*" "\\1" ITEM_VERSION ${line})
		ENDIF(${line} MATCHES "package provide ${ROOT_NAME}")
		IF(${ROOT_NAME} STREQUAL "tcltest" AND ${line} MATCHES "    variable Version")
			STRING(REGEX REPLACE ".*variable Version ([0-9\\.]*).*" "\\1" ITEM_VERSION ${line})
		ENDIF(${ROOT_NAME} STREQUAL "tcltest" AND ${line} MATCHES "    variable Version")
		IF(${line} MATCHES "package require Tcl")
			STRING(REGEX REPLACE ".*package require Tcl ([0-9\\.]*).*" "\\1" ITEM_TCL_VERSION ${line})
		ENDIF(${line} MATCHES "package require Tcl")
	ENDFOREACH(line ${ITEM_CONTENTS})
	IF(NOT ITEM_TCL_VERSION)
		SET(ITEM_TCL_VERSION 8.4)
	ENDIF(NOT ITEM_TCL_VERSION)
	IF(ITEM_SUBDIR)
		configure_file(${ITEM} ${CMAKE_BINARY_DIR}/lib/tcl8/${ITEM_TCL_VERSION}/${ITEM_SUBDIR}/${ROOT_NAME}-${ITEM_VERSION}.tm COPYONLY)
		INSTALL(FILES ${ITEM} DESTINATION lib/tcl8/${ITEM_TCL_VERSION}/${ITEM_SUBDIR} RENAME ${ROOT_NAME}-${ITEM_VERSION}.tm)
	ELSE(ITEM_SUBDIR)
		configure_file(${ITEM} ${CMAKE_BINARY_DIR}/lib/tcl8/${ITEM_TCL_VERSION}/${ROOT_NAME}-${ITEM_VERSION}.tm COPYONLY)
		INSTALL(FILES ${ITEM} DESTINATION lib/tcl8/${ITEM_TCL_VERSION} RENAME ${ROOT_NAME}-${ITEM_VERSION}.tm)
	ENDIF(ITEM_SUBDIR)
ENDFOREACH(ITEM ${single_tcl_scripts})

IF(NOT WIN32)
	INSTALL(FILES ../unix/tclAppInit.c DESTINATION lib/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR})
ELSE(NOT WIN32)
	INSTALL(FILES ../win/tclAppInit.c DESTINATION lib/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR})
ENDIF(NOT WIN32)

SET(tcl_msgs
	msgs/af.msg
	msgs/af_za.msg
	msgs/ar.msg
	msgs/ar_in.msg
	msgs/ar_jo.msg
	msgs/ar_lb.msg
	msgs/ar_sy.msg
	msgs/be.msg
	msgs/bg.msg
	msgs/bn.msg
	msgs/bn_in.msg
	msgs/ca.msg
	msgs/cs.msg
	msgs/da.msg
	msgs/de.msg
	msgs/de_at.msg
	msgs/de_be.msg
	msgs/el.msg
	msgs/en_au.msg
	msgs/en_be.msg
	msgs/en_bw.msg
	msgs/en_ca.msg
	msgs/en_gb.msg
	msgs/en_hk.msg
	msgs/en_ie.msg
	msgs/en_in.msg
	msgs/en_nz.msg
	msgs/en_ph.msg
	msgs/en_sg.msg
	msgs/en_za.msg
	msgs/en_zw.msg
	msgs/eo.msg
	msgs/es.msg
	msgs/es_ar.msg
	msgs/es_bo.msg
	msgs/es_cl.msg
	msgs/es_co.msg
	msgs/es_cr.msg
	msgs/es_do.msg
	msgs/es_ec.msg
	msgs/es_gt.msg
	msgs/es_hn.msg
	msgs/es_mx.msg
	msgs/es_ni.msg
	msgs/es_pa.msg
	msgs/es_pe.msg
	msgs/es_pr.msg
	msgs/es_py.msg
	msgs/es_sv.msg
	msgs/es_uy.msg
	msgs/es_ve.msg
	msgs/et.msg
	msgs/eu.msg
	msgs/eu_es.msg
	msgs/fa.msg
	msgs/fa_in.msg
	msgs/fa_ir.msg
	msgs/fi.msg
	msgs/fo.msg
	msgs/fo_fo.msg
	msgs/fr.msg
	msgs/fr_be.msg
	msgs/fr_ca.msg
	msgs/fr_ch.msg
	msgs/ga.msg
	msgs/ga_ie.msg
	msgs/gl.msg
	msgs/gl_es.msg
	msgs/gv.msg
	msgs/gv_gb.msg
	msgs/he.msg
	msgs/hi.msg
	msgs/hi_in.msg
	msgs/hr.msg
	msgs/hu.msg
	msgs/id.msg
	msgs/id_id.msg
	msgs/is.msg
	msgs/it.msg
	msgs/it_ch.msg
	msgs/ja.msg
	msgs/kl.msg
	msgs/kl_gl.msg
	msgs/ko.msg
	msgs/ko_kr.msg
	msgs/kok.msg
	msgs/kok_in.msg
	msgs/kw.msg
	msgs/kw_gb.msg
	msgs/lt.msg
	msgs/lv.msg
	msgs/mk.msg
	msgs/mr.msg
	msgs/mr_in.msg
	msgs/ms.msg
	msgs/ms_my.msg
	msgs/mt.msg
	msgs/nb.msg
	msgs/nl.msg
	msgs/nl_be.msg
	msgs/nn.msg
	msgs/pl.msg
	msgs/pt.msg
	msgs/pt_br.msg
	msgs/ro.msg
	msgs/ru.msg
	msgs/ru_ua.msg
	msgs/sh.msg
	msgs/sk.msg
	msgs/sl.msg
	msgs/sq.msg
	msgs/sr.msg
	msgs/sv.msg
	msgs/sw.msg
	msgs/ta.msg
	msgs/ta_in.msg
	msgs/te.msg
	msgs/te_in.msg
	msgs/th.msg
	msgs/tr.msg
	msgs/uk.msg
	msgs/vi.msg
	msgs/zh.msg
	msgs/zh_cn.msg
	msgs/zh_hk.msg
	msgs/zh_sg.msg
	msgs/zh_tw.msg
)

INSTALL(FILES ${tcl_msgs} DESTINATION lib/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR}/msgs)
TCL_SCRIPTS_BUILD(tcl_msgs lib/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR}/msgs)

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

IF(LOCAL_TZ_DATA)
	INSTALL(DIRECTORY tzdata DESTINATION lib/tzdata)
ENDIF(LOCAL_TZ_DATA)
