cmake_minimum_required(VERSION 3.10)

project(struct)

set(CMAKE_CXX_STANDARD 14)

message(${CMAKE_CURRENT_SOURCE_DIR})
message(${CMAKE_CURRENT_BINARY_DIR})

aux_source_directory(./src SRC_LIST)

file(GLOB INCLUDE_DIR "./include/*.h")

add_executable(struct main.cpp ${SRC_LIST} ${INCLUDE_LIST})

target_include_directories(struct PUBLIC ./include)
