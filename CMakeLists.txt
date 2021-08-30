cmake_minimum_required(VERSION 3.20)
project(Act C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(Colors)

add_executable(Act_01 Actividad1.c)

add_executable(Act_02 Actividad2.c)

add_executable(Act_03 Actividad3.c)

add_executable(Act_04 Actividad4.c)

target_link_libraries(Act_02 Colors)
target_link_libraries(Act_03 Colors)
target_link_libraries(Act_04 Colors)
