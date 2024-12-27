cmake_minimum_required(VERSION 3.10)
project(MyProject C)

set(CMAKE_C_STANDARD 99)

include_directories(include)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)

if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/external/unity/src/unity.c")
  message(FATAL_ERROR "Unity submodule not found. Please run 'git submodule update --init'")
endif()

add_subdirectory(external/unity)