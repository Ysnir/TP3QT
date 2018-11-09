QT       += core gui widgets

TARGET = cube
TEMPLATE = app

SOURCES += \
    calendar.cpp \
    season_demo.cpp

SOURCES += \
    mainwidget.cpp \
    geometryengine.cpp

HEADERS += \
    mainwidget.h \
    geometryengine.h \
    calendar.h

RESOURCES += \
    shaders.qrc \
    textures.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/opengl/cube
INSTALLS += target

DISTFILES += \
    height_map.pgm \
    heightmap.dat \
    height_map.pgm \
    height_map.pgm
