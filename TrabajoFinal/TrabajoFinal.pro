QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    error.cpp \
    formperfil.cpp \
    formprincipal.cpp \
    formregister.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Arbol.h \
    Followers.h \
    Graficador.h \
    Lista.h \
    Pilas.h \
    Publi.h \
    User.h \
    busquedaBinariaUsuarios.h \
    error.h \
    formperfil.h \
    formprincipal.h \
    formregister.h \
    lectorPub.h \
    logeador.h \
    mainwindow.h \
    orderPubs.h \
    register.h

FORMS += \
    FormError.ui \
    error.ui \
    formperfil.ui \
    formprincipal.ui \
    formregister.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
