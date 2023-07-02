TEMPLATE = app
TARGET = camera

QT += multimedia multimediawidgets

HEADERS = \
    camera.h \
    graphicsview.h \
    imagesettings.h \


SOURCES = \
    graphicsview.cpp \
    main.cpp \
    camera.cpp \
    imagesettings.cpp \


FORMS += \
    camera.ui \
    imagesettings.ui

RESOURCES += camera.qrc
target.path = $$PWD
INSTALLS += target

QT+=widgets
include(shared.pri)

