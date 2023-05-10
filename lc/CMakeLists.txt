cmake_minimum_required(VERSION 3.5)
project(lc)
set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/googletest/googletest/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/googletest/googletest)
add_subdirectory(third_party/googletest/googletest)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/googletest/googletest)
# add to gtest cmake: set(GOOGLETEST_VERSION 1.13.0)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/bitree)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/out")
set(TEST_LIST
        test_main.cpp
        bitree/utils_test.cpp
        bitree/105_build_tree_from_pre_in_order_test.cpp
        bitree/124_max_path_sum_test.cpp
        base/1_two_sum_test.cpp
        base/371_sum_two_int_test.cpp
        base/50_quick_power.h
        base/50_quick_power_test.cpp
        base/i_08_02_quick_multi.h
        base/i_08_02_quick_multi_test.cpp
        base/69_sqrt.h
        base/69_sqrt_test.cpp
        base/s_64_sum_nums_test.cpp
        base/231_pow_of_two_test.cpp
        base/326_pow_of_three_test.cpp
        base/342_pow_of_four_test.cpp
        )

add_executable(Test ${TEST_LIST})
target_link_libraries(Test gtest gtest_main)