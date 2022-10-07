cmake_minimum_required(VERSION 3.10)

project(pointer)

set(CMAKE_CXX_STANDARD 11)

file(GLOB INCLUDE_LIST "./include/*.h")

aux_source_directory(./src SRC_LIST)

add_executable(main ./main.cpp ${SRC_LIST} ${INCLUDE_LIST})

target_include_directories(main PUBLIC include)