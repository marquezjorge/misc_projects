cmake_minimum_required(VERSION 3.13)
project(morsecode_translator)

set(CMAKE_CXX_STANDARD 14)

add_executable(morsecode_translator main.cpp morsecode.h morsecode.cpp)