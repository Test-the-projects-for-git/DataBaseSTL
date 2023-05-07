cmake_minimum_required (VERSION 3.25.2 FATAL_ERROR)

project(DataBaseSTL)

include_directories(src/includes)

add_executable (DataBaseApp src/main.cpp 
src/base.cpp src/includes/base.hpp)