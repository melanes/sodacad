
unix {
    macx {
        INSTALLDIR = ../../
    } else {
        INSTALLDIR = ../../unix
    }
}

win32 {
    INSTALLDIR = ../../windows
}

QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.9
