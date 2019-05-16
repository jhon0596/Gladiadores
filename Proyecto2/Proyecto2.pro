#-------------------------------------------------
#
# Project created by QtCreator 2019-04-19T17:06:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proyecto2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    clienthandler.cpp \
    ventanageneraciones.cpp \
    listamovimiento.cpp \
    nodomovimiento.cpp

HEADERS  += mainwindow.h \
    clienthandler.h \
    ventanageneraciones.h \
    listamovimiento.h \
    nodomovimiento.h

FORMS    += mainwindow.ui \
    ventanageneraciones.ui

INCLUDEPATH += /usr/include/boost

LIBS += -L/usr/include/boost -lboost_system
LIBS += -L/usr/include/boost  -lboost_chrono
LIBS += -L/usr/include/boost  -lboost_thread
LIBS += -L/usr/include/boost  -lboost_timer

RESOURCES += \
    imagenes.qrc
