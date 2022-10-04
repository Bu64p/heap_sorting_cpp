cmake_minimum_required(VERSION 3.16.3)
project(hs)
add_library(applib heapSorting.cpp)
add_executable(app main.cpp)
target_link_libraries(app applib)

