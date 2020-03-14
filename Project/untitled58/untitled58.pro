CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(class4plugin)
TEMPLATE    = lib

HEADERS     = class4plugin.h \
    component2.h
SOURCES     = class4plugin.cpp \
    component2.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(class4.pri)

FORMS += \
    component2.ui

CONFIG += staticlib
