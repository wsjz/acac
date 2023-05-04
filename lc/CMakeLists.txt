cmake_minimum_required(VERSION 3.5)
project(lc)
set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/googletest/googletest/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/bitree)

add_subdirectory(third_party/googletest/googletest)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/googletest/googletest)
# add to gtest cmake: set(GOOGLETEST_VERSION 1.13.0)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/out")
add_executable(Test "bitree/utils_test.cpp")
# target_link_directories(Test gtest)