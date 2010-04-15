project(win_iconv)

cmake_minimum_required(VERSION 2.6)

set(CPACK_GENERATOR "TBZ2")
include(CPack)
option(BUILD_TEST "build test executable" ON)
if(BUILD_TEST)
    enable_testing()
endif(BUILD_TEST)

set(DEFAULT_LIBICONV_DLL "\"\"")

add_definitions(-DDEFAULT_LIBICONV_DLL=${DEFAULT_LIBICONV_DLL})
add_definitions(-DUSE_LIBICONV_DLL)

if(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif(MSVC)

add_library(iconv SHARED win_iconv.c iconv.def)
set_target_properties(iconv PROPERTIES COMPILE_FLAGS "-DMAKE_DLL")

add_executable(win_iconv win_iconv.c)
set_target_properties(win_iconv PROPERTIES COMPILE_FLAGS "-DMAKE_EXE")

install(TARGETS iconv win_iconv RUNTIME DESTINATION bin
                                LIBRARY DESTINATION lib
                                ARCHIVE DESTINATION lib)

install(FILES iconv.h DESTINATION include)

if(BUILD_TEST)
    # tests:
    add_executable(win_iconv_test win_iconv_test.c)
    add_test(win_iconv_test win_iconv_test)
endif(BUILD_TEST)
project(win_iconv)

cmake_minimum_required(VERSION 2.6)

set(CPACK_GENERATOR "TBZ2")
include(CPack)
option(BUILD_TEST "build test executable" ON)
if(BUILD_TEST)
    enable_testing()
endif(BUILD_TEST)

set(DEFAULT_LIBICONV_DLL "\"\"")

add_definitions(-DDEFAULT_LIBICONV_DLL=${DEFAULT_LIBICONV_DLL})
add_definitions(-DUSE_LIBICONV_DLL)

if(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif(MSVC)

add_library(iconv SHARED win_iconv.c iconv.def)
set_target_properties(iconv PROPERTIES COMPILE_FLAGS "-DMAKE_DLL")

add_executable(win_iconv win_iconv.c)
set_target_properties(win_iconv PROPERTIES COMPILE_FLAGS "-DMAKE_EXE")

install(TARGETS iconv win_iconv RUNTIME DESTINATION bin
                                LIBRARY DESTINATION lib
                                ARCHIVE DESTINATION lib)

install(FILES iconv.h DESTINATION include)

if(BUILD_TEST)
    # tests:
    add_executable(win_iconv_test win_iconv_test.c)
    add_test(win_iconv_test win_iconv_test)
endif(BUILD_TEST)
project(win_iconv)

cmake_minimum_required(VERSION 2.6)

set(CPACK_GENERATOR "TBZ2")
include(CPack)
option(BUILD_TEST "build test executable" ON)
if(BUILD_TEST)
    enable_testing()
endif(BUILD_TEST)

set(DEFAULT_LIBICONV_DLL "\"\"")

add_definitions(-DDEFAULT_LIBICONV_DLL=${DEFAULT_LIBICONV_DLL})
add_definitions(-DUSE_LIBICONV_DLL)

if(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif(MSVC)

add_library(iconv SHARED win_iconv.c iconv.def)
set_target_properties(iconv PROPERTIES COMPILE_FLAGS "-DMAKE_DLL")

add_executable(win_iconv win_iconv.c)
set_target_properties(win_iconv PROPERTIES COMPILE_FLAGS "-DMAKE_EXE")

install(TARGETS iconv win_iconv RUNTIME DESTINATION bin
                                LIBRARY DESTINATION lib
                                ARCHIVE DESTINATION lib)

install(FILES iconv.h DESTINATION include)

if(BUILD_TEST)
    # tests:
    add_executable(win_iconv_test win_iconv_test.c)
    add_test(win_iconv_test win_iconv_test)
endif(BUILD_TEST)
project(win_iconv)

cmake_minimum_required(VERSION 2.6)

set(CPACK_GENERATOR "TBZ2")
include(CPack)
option(BUILD_TEST "build test executable" ON)
if(BUILD_TEST)
    enable_testing()
endif(BUILD_TEST)

set(DEFAULT_LIBICONV_DLL "\"\"")

add_definitions(-DDEFAULT_LIBICONV_DLL=${DEFAULT_LIBICONV_DLL})
add_definitions(-DUSE_LIBICONV_DLL)

if(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif(MSVC)

add_library(iconv SHARED win_iconv.c iconv.def)
set_target_properties(iconv PROPERTIES COMPILE_FLAGS "-DMAKE_DLL")

add_executable(win_iconv win_iconv.c)
set_target_properties(win_iconv PROPERTIES COMPILE_FLAGS "-DMAKE_EXE")

install(TARGETS iconv win_iconv RUNTIME DESTINATION bin
                                LIBRARY DESTINATION lib
                                ARCHIVE DESTINATION lib)

install(FILES iconv.h DESTINATION include)

if(BUILD_TEST)
    # tests:
    add_executable(win_iconv_test win_iconv_test.c)
    add_test(win_iconv_test win_iconv_test)
endif(BUILD_TEST)
project(win_iconv)

cmake_minimum_required(VERSION 2.6)

set(CPACK_GENERATOR "TBZ2")
include(CPack)
option(BUILD_TEST "build test executable" ON)
if(BUILD_TEST)
    enable_testing()
endif(BUILD_TEST)

set(DEFAULT_LIBICONV_DLL "\"\"")

add_definitions(-DDEFAULT_LIBICONV_DLL=${DEFAULT_LIBICONV_DLL})
add_definitions(-DUSE_LIBICONV_DLL)

if(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif(MSVC)

add_library(iconv SHARED win_iconv.c iconv.def)
set_target_properties(iconv PROPERTIES COMPILE_FLAGS "-DMAKE_DLL")

add_executable(win_iconv win_iconv.c)
set_target_properties(win_iconv PROPERTIES COMPILE_FLAGS "-DMAKE_EXE")

install(TARGETS iconv win_iconv RUNTIME DESTINATION bin
                                LIBRARY DESTINATION lib
                                ARCHIVE DESTINATION lib)

install(FILES iconv.h DESTINATION include)

if(BUILD_TEST)
    # tests:
    add_executable(win_iconv_test win_iconv_test.c)
    add_test(win_iconv_test win_iconv_test)
endif(BUILD_TEST)
project(win_iconv)

cmake_minimum_required(VERSION 2.6)

set(CPACK_GENERATOR "TBZ2")
include(CPack)
option(BUILD_TEST "build test executable" ON)
if(BUILD_TEST)
    enable_testing()
endif(BUILD_TEST)

set(DEFAULT_LIBICONV_DLL "\"\"")

add_definitions(-DDEFAULT_LIBICONV_DLL=${DEFAULT_LIBICONV_DLL})
add_definitions(-DUSE_LIBICONV_DLL)

if(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif(MSVC)

add_library(iconv SHARED win_iconv.c iconv.def)
set_target_properties(iconv PROPERTIES COMPILE_FLAGS "-DMAKE_DLL")

add_executable(win_iconv win_iconv.c)
set_target_properties(win_iconv PROPERTIES COMPILE_FLAGS "-DMAKE_EXE")

install(TARGETS iconv win_iconv RUNTIME DESTINATION bin
                                LIBRARY DESTINATION lib
                                ARCHIVE DESTINATION lib)

install(FILES iconv.h DESTINATION include)

if(BUILD_TEST)
    # tests:
    add_executable(win_iconv_test win_iconv_test.c)
    add_test(win_iconv_test win_iconv_test)
endif(BUILD_TEST)
project(win_iconv)

cmake_minimum_required(VERSION 2.6)

set(CPACK_GENERATOR "TBZ2")
include(CPack)
option(BUILD_TEST "build test executable" ON)
if(BUILD_TEST)
    enable_testing()
endif(BUILD_TEST)

set(DEFAULT_LIBICONV_DLL "\"\"")

add_definitions(-DDEFAULT_LIBICONV_DLL=${DEFAULT_LIBICONV_DLL})
add_definitions(-DUSE_LIBICONV_DLL)

if(MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif(MSVC)

add_library(iconv SHARED win_iconv.c iconv.def)
set_target_properties(iconv PROPERTIES COMPILE_FLAGS "-DMAKE_DLL")

add_executable(win_iconv win_iconv.c)
set_target_properties(win_iconv PROPERTIES COMPILE_FLAGS "-DMAKE_EXE")

install(TARGETS iconv win_iconv RUNTIME DESTINATION bin
                                LIBRARY DESTINATION lib
                                ARCHIVE DESTINATION lib)

install(FILES iconv.h DESTINATION include)

if(BUILD_TEST)
    # tests:
    add_executable(win_iconv_test win_iconv_test.c)
    add_test(win_iconv_test win_iconv_test)
endif(BUILD_TEST)
