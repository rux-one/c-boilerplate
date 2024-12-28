cmake_minimum_required(VERSION 3.10)
set(PROJECT_VERSION 0.0.1)
project(MyProject VERSION ${PROJECT_VERSION} LANGUAGES C)
configure_file(version.h.in ${CMAKE_CURRENT_BINARY_DIR}/version.h @ONLY)

set(CMAKE_C_STANDARD 99)

include_directories(include)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)

if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/external/unity/src/unity.c")
  message(FATAL_ERROR "Unity submodule not found. Please run 'git submodule update --init'")
endif()

add_subdirectory(external/unity)