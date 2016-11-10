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
    izpis_zmagovalca.cpp \
    izpis_zmagovalca.cpp \
    izpis_neodloceno.cpp

HEADERS  += glavnookno.h \
    zacetnookno.h \
    izpis_zmagovalca.h \
    izpis_zmagovalca.h \
    izpis_neodloceno.h

FORMS    += glavnookno.ui \
    zacetnookno.ui \
    izpis_zmagovalca.ui \
    izpis_neodloceno.ui

RESOURCES += \
    resource.qrc
