cmake_minimum_required(VERSION 3.24)
project(Vector C)

set(CMAKE_C_STANDARD 11)

add_executable(Vector main.c libs/data_source/vector/vector.c libs/data_source/vector/vector.h)
