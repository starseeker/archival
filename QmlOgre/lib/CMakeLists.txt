

#CONFIG += qt
#QT += qml quick

set(qmlogre_SRCS
		ogreitem.cpp
		ogrenode.cpp
		ogrecamerawrapper.cpp
		ogreengine.cpp
   )

set(qmlogre_HEADERS
    ogreitem.h 
    ogrenode.h 
    ogrecamerawrapper.h 
    ogreengine.h
)

add_library(qmlogre ${qmlogre_SRCS})
target_link_libraries(qmlogre ${OGRE_LIBRARY_REL} ${OGRE_RenderSystem_GL_LIBRARY_REL})
qt5_use_modules(qmlogre Qml Quick)

# Copy all headers to build folder
#Headers.path = $$OUT_PWD/include
#INSTALLS += Headers
