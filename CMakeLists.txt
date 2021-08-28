cmake_minimum_required(VERSION 3.20)
project(Act C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(Colors)

add_executable(Act_01 Actividad1.c)

add_executable(Act_02 Actividad2.c)

target_link_libraries(Act_02 Colors)
