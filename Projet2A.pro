#-------------------------------------------------
#
# Project created by QtCreator 2018-11-11T14:26:19
#
#-------------------------------------------------

QT       += core gui\
         multimedia
QT += multimediawidgets
QT+=sql
QT+=serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projet2A
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

CONFIG += c++11

SOURCES += \
    conge.cpp \
        main.cpp \
        mainwindow.cpp \
    connexion.cpp \
    dialog.cpp \
    personnels.cpp \
    sonbackground.cpp \
    reservation.cpp \
    notification.cpp \
    arduino.cpp

HEADERS += \
    conge.h \
        mainwindow.h \
    personnels.h \
    sql.h \
    connexion.h \
    dialog.h \
    bib.h \
    sonbackground.h \
    reservation.h \
    notification.h \
    arduino.h \
    ui_conge.h \
    ui_personnels.h

FORMS += \
    conge.ui \
        mainwindow.ui \
    Personnels.ui \
    reservation.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
