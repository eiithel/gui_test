#-------------------------------------------------
#
# Project created by QtCreator 2016-07-18T14:10:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Vigil_3G
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    vigilbutton.cpp \
    vigilbuttonpalette.cpp \
    customshadoweffect.cpp \
    model.cpp \
    controler.cpp

HEADERS  += mainwindow.h \
    vigilbutton.h \
    vigilbuttonpalette.h \
    customshadoweffect.h \
    model.h \
    controler.h

FORMS    += mainwindow.ui

DISTFILES += \
    clicks_results.txt \
    C:Tempclicks_results.txt

QMAKE_CXXFLAGS += -std=c++0x
