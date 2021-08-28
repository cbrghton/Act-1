cmake_minimum_required(VERSION 3.20)
project(Colors C)

set(CMAKE_C_STANDARD 11)

add_library(Colors colors.c)

target_include_directories(Colors PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})