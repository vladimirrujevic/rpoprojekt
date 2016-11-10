#-------------------------------------------------
#
# Project created by QtCreator 2016-10-30T11:43:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = rpoprojekt
TEMPLATE = app


SOURCES += main.cpp\
        glavnookno.cpp \
    zacetnookno.cpp \
    vnosimena1.cpp \
    vnosimena2.cpp

HEADERS  += glavnookno.h \
    zacetnookno.h \
    vnosimena1.h \
    vnosimena2.h

FORMS    += glavnookno.ui \
    zacetnookno.ui \
    vnosimena1.ui \
    vnosimena2.ui

RESOURCES += \
    resource.qrc

STATECHARTS += \
    neke.scxml
