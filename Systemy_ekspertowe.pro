#-------------------------------------------------
#
# Project created by QtCreator 2017-10-28T12:03:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Systemy_ekspertowe
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    helpers/gwint.cpp \
    helpers/narzedzie.cpp \
    helpers/wiertlo.cpp \
    helpers/freztrzpieniowy.cpp \
    helpers/frezwalcowoczolowy.cpp \
    gwintwindow.cpp \
    otworwindow.cpp \
    plaszczyznakrawedzwindow.cpp \
    helpers/nardzedziafactory.cpp

HEADERS += \
        mainwindow.h \
    narzedzie.h \
    helpers/gwint.h \
    helpers/narzedzie.h \
    helpers/narzedzieenum.h \
    helpers/wiertlo.h \
    helpers/freztrzpieniowy.h \
    helpers/frezwalcowoczolowy.h \
    gwintwindow.h \
    otworwindow.h \
    plaszczyznakrawedzwindow.h \
    helpers/nardzedziafactory.h

FORMS += \
        mainwindow.ui \
    gwintwindow.ui \
    otworwindow.ui \
    plaszczyznakrawedzwindow.ui
