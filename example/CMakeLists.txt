#QT += qml quick

#LIBS += -L../lib -lqmlogre
set(qmlogre_example_SRCS
		main.cpp
		cameranodeobject.cpp
		exampleapp.cpp
   )

set(qmlogre_HEADERS
    cameranodeobject.h
    exampleapp.h
)

set(OTHER_FILES
    resources/example.qml
)

get_filename_component(OGRE_PLUGINS_DIR ${OGRE_Plugin_BSPSceneManager_LIBRARY_REL} DIRECTORY)
configure_file(config/plugins.cfg.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/plugins.cfg)
configure_file(config/resources.cfg ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/resources.cfg COPYONLY)
configure_file(resources/data.zip ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/resources/data.zip COPYONLY)

#RESOURCES += resources/resources.qrc
qt5_add_resources(QRC_RESOURCES resources/resources.qrc)

add_executable(qmlogre_example ${qmlogre_example_SRCS} ${QRC_RESOURCES})
target_link_libraries(qmlogre_example qmlogre)
qt5_use_modules(qmlogre_example Qml Quick)

# Copy all resources to build folder
#Resources.path = $$OUT_PWD/resources
#Resources.files = resources/*.zip

# Copy all config files to build folder
#Config.path = $$OUT_PWD
#Config.files = config/*

# make install
#INSTALLS += Resources Config
