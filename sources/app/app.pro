TEMPLATE = app

OBJECTS_DIR = ../../bin/objects
DESTDIR = ../../bin
TARGET = denfer
INCLUDEPATH += ".."

# Define to do proper dll symbols import
DEFINES += "X_EXPORT=Q_DECL_IMPORT"

SOURCES += main.cpp

LIBS += -L../../bin/libs
LIBS += -lcore -lgui -lproc

