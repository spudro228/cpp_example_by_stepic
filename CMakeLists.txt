
cmake_minimum_required(VERSION 3.5)

project(hello_world)	

set(SOURCE_EXE main.cxx)

include_directories(ArrayClass)

add_executable(main ${SOURCE_EXE})

add_subdirectory(ArrayClass)

target_link_libraries( main Array)
