#define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

#define the project name
project(project VERSION 1.0 LANGUAGES CXX)

#define the c standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#add some compile options
add_compile_options(-Wall -Wextra -pedantic)

#add an executable and assign files to it
add_executable(project src/CPP_Struct.cpp)
