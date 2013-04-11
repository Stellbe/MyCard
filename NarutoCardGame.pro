# -------------------------------------------------
# Project created by QtCreator 2013-04-09T07:02:39
# -------------------------------------------------
QT += widgets \
      network \
      xml

TARGET = NarutoCardGame

DESTDIR = 01_build
OBJECTS_DIR = 01_build/.obj
MOC_DIR = 01_build/.moc
RCC_DIR = 01_build/.rcc
UI_DIR = 01_build/.ui

TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    card.cpp \
    player.cpp \
    ninja.cpp \
    technique.cpp \
    tactique.cpp \
    client.cpp
HEADERS += mainwindow.h \
    card.h \
    player.h \
    ninja.h \
    technique.h \
    tactique.h \
    client.h
FORMS += mainwindow.ui
