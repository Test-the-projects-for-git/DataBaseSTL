cmake_minimum_required (VERSION 3.25.2 FATAL_ERROR) #Версия для cmake

project(DataBaseSTL) #название проекта

#Указываем имя исполняемого файла и все исходные файлы которые есть в проекте
include_directories(src/includes)
add_executable (DataBaseApp src/main.cpp 
src/base.cpp src/includes/base.hpp)
#the new commintariies