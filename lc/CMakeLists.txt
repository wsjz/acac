include_directories(${CMAKE_CURRENT_BINARY_DIR})

#aux_source_directory(. SRC_LIST)
#aux_source_directory(bitree SRC_LIST2)
#add_executable(test ${SRC_LIST} ${SRC_LIST2})

#set(SRC_LIST
#        ./test.cpp
#        ./bitree/tree.cpp
#        )
# add_executable(test ${SRC_LIST})

add_executable(test 1_two_sum.cpp)
add_executable(test1 bitree/124_max_path_sum.cpp)
add_library(lc 1_two_sum.cpp)

install (TARGETS lc DESTINATION bin)
install (FILES 1_two_sum.cpp DESTINATION include)