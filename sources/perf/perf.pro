! include( ../../common_libs.pri ) {
    error( Couldn't find the common_libs.pri file! )
}

unix {
    SOURCES += "linux/*.cpp"
    HEADERS += "linux/*.hpp"
}

SOURCES += \
    dummy.cpp
