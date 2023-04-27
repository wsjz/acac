cmake_minimum_required(VERSION 2.6)
project(acac)
set(CMAKE_CXX_STANDARD 14)

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/lc")
add_subdirectory(lc)

set(EXTRA_LIBS ${EXTRA_LIBS} lc)