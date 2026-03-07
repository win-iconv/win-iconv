cmake_minimum_required(VERSION 3.10)
project(win_iconv)

set(CMAKE_DEBUG_POSTFIX "d")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR})

find_package(Doxygen)

option(WIN_ICONV_BUILD_TEST "build test executable" OFF)
option(WIN_ICONV_BUILD_STATIC "build the static library" ON)
option(WIN_ICONV_BUILD_SHARED "build the shared library" ON)
option(WIN_ICONV_BUILD_EXECUTABLE "build the win_iconv executable" ON)
option(DISABLE_LOCALE_CHARSET "disable locale_charset()" OFF)

if(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif(MSVC)

add_definitions(-DUSE_LIBICONV_DLL)
if(DEFAULT_LIBICONV_DLL)
	add_definitions(-DDEFAULT_LIBICONV_DLL=${DEFAULT_LIBICONV_DLL})
endif(DEFAULT_LIBICONV_DLL)

if(DISABLE_LOCALE_CHARSET)
    add_definitions(-DDISABLE_LOCALE_CHARSET)
    file(READ iconv.def FILE_CONTENTS)
    string(REPLACE "locale_charset" ";locale_charset" FILE_CONTENTS "${FILE_CONTENTS}")
    file(WRITE iconv-g.def "${FILE_CONTENTS}")
else(DISABLE_LOCALE_CHARSET)
    file(COPY_FILE iconv.def iconv-g.def)
endif(DISABLE_LOCALE_CHARSET)

if(WIN_ICONV_BUILD_SHARED)
    add_library(iconv_shared SHARED win_iconv.c iconv-g.def iconv.h localcharset.h)
    set_target_properties(iconv_shared PROPERTIES COMPILE_FLAGS "-DMAKE_DLL" PREFIX "" OUTPUT_NAME iconv)
    install(TARGETS iconv_shared RUNTIME DESTINATION bin
                                 LIBRARY DESTINATION lib
                                 ARCHIVE DESTINATION lib)
endif(WIN_ICONV_BUILD_SHARED)

if(WIN_ICONV_BUILD_EXECUTABLE)
    add_executable(win_iconv win_iconv.c iconv.h localcharset.h)
    set_target_properties(win_iconv PROPERTIES COMPILE_FLAGS "-DMAKE_EXE")
    install(TARGETS win_iconv RUNTIME DESTINATION bin
                              LIBRARY DESTINATION lib
                              ARCHIVE DESTINATION lib)
endif(WIN_ICONV_BUILD_EXECUTABLE)

if(WIN_ICONV_BUILD_STATIC)
    add_library(iconv_static STATIC win_iconv.c iconv.h localcharset.h)
    if(MSVC)
        # FIXME: keep previous behavior for now
        set_target_properties(iconv_static PROPERTIES OUTPUT_NAME libiconv)
    else(MSVC)
        set_target_properties(iconv_static PROPERTIES OUTPUT_NAME iconv)
    endif(MSVC)
    install(TARGETS iconv_static RUNTIME DESTINATION bin
                                 LIBRARY DESTINATION lib
                                 ARCHIVE DESTINATION lib)
endif(WIN_ICONV_BUILD_STATIC)

install(FILES iconv.h localcharset.h DESTINATION include)

if(WIN_ICONV_BUILD_TEST)
    enable_testing()
    add_executable(win_iconv_test win_iconv_test.c)
    add_test(win_iconv_test win_iconv_test)
endif(WIN_ICONV_BUILD_TEST)
