cmake_minimum_required(VERSION 3.0)
project(win_iconv)

set(CMAKE_DEBUG_POSTFIX "d")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR})

find_package(Doxygen)

option(WIN_ICONV_BUILD_TEST "build test executable" OFF)
option(WIN_ICONV_BUILD_STATIC "build the static library" ON)
option(WIN_ICONV_BUILD_SHARED "build the shared library" ON)
option(WIN_ICONV_BUILD_EXECUTABLE "build the win_iconv executable" ON)

if(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif(MSVC)

add_definitions(-DUSE_LIBICONV_DLL)
if(DEFAULT_LIBICONV_DLL)
	add_definitions(-DDEFAULT_LIBICONV_DLL=${DEFAULT_LIBICONV_DLL})
endif(DEFAULT_LIBICONV_DLL)

if(WIN_ICONV_BUILD_SHARED)
    add_library(iconv SHARED win_iconv.c iconv.def iconv.h localcharset.h)
    set_target_properties(iconv PROPERTIES COMPILE_FLAGS "-DMAKE_DLL" PREFIX "")
    install(TARGETS iconv RUNTIME DESTINATION bin
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
    add_library(libiconv STATIC win_iconv.c iconv.h localcharset.h)
    install(TARGETS libiconv RUNTIME DESTINATION bin
                             LIBRARY DESTINATION lib
                             ARCHIVE DESTINATION lib)
endif(WIN_ICONV_BUILD_STATIC)

install(FILES iconv.h localcharset.h DESTINATION include)

if(WIN_ICONV_BUILD_TEST)
    enable_testing()
    add_executable(win_iconv_test win_iconv_test.c)
    add_test(win_iconv_test win_iconv_test)
endif(WIN_ICONV_BUILD_TEST)
