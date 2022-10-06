cmake_minimum_required(VERSION 3.16)
project(compiler02 LANGUAGES CXX)

set(CMAKE_CXX_COMPILER "g++")

add_executable(compiler_02 hello_world.cpp func.cpp func.h)