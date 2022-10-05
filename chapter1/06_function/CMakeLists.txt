cmake_minimum_required(VERSION 3.10)

project(chapter1)

set(CMAKE_CXX_STANDARD 11)

file(GLOB INCLUDE_LIST "../include/*.h")

add_executable(05_funcfile )

target_sources(05_funcfile PUBLIC ./src/05_funcfile.cpp ./src/swap.cpp ${INCLUDE_LIST})

target_include_directories(05_funcfile PUBLIC ./include)
