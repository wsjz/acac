include_directories(${CMAKE_CURRENT_BINARY_DIR})

#aux_source_directory(. SRC_LIST)
#aux_source_directory(bitree SRC_LIST2)
#add_executable(test ${SRC_LIST} ${SRC_LIST2})

#set(SRC_LIST
#        ./test.cpp
#        ./bitree/tree.cpp
#        )
# add_executable(test ${SRC_LIST})

add_executable(test ./test.cpp)
add_executable(test1 ./bitree/tree.cpp)
add_library(lc test.cpp)

install (TARGETS lc DESTINATION bin)
install (FILES test.cpp DESTINATION include)