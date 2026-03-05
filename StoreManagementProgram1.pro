QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    additemsscreen.cpp \
    clocklog.cpp \
    logindialogue.cpp \
    main.cpp \
    mainwindow.cpp \
    settingsscreen.cpp

HEADERS += \
    additemsscreen.h \
    clocklog.h \
    logindialogue.h \
    mainwindow.h \
    settingsscreen.h

FORMS += \
    additemsscreen.ui \
    clocklog.ui \
    logindialogue.ui \
    mainwindow.ui \
    settingsscreen.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
