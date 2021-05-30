include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov


HEADERS +=     \
    ../app/function.h \
    test.h \
    test_cp.h \
    test_cd.h \
    test_cfb.h \
    test_ob.h \
    test_cm.h \
    test_m.h

SOURCES +=     main.cpp \
    ../app/function.c \
    ../app/checkmove.c


INCLUDEPATH += ../app
