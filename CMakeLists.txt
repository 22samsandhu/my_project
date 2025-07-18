cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(include)

add_library(mylib SHARED lib/mylib.c)
target_compile_definitions(mylib PRIVATE BUILDING_MYLIB)

add_executable(myapp src/main.cpp)
target_link_libraries(myapp PRIVATE mylib)