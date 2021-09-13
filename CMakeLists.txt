cmake_minimum_required(VERSION 3.20)
project(Act C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(Colors)
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(Act_01 Actividad1.c)

add_executable(Act_02 Actividad2.c)

add_executable(Act_03 Actividad3.c)

add_executable(Act_04 Actividad4.c)

add_executable(Act_05 Actividad5.c)

add_executable(Act_06 Actividad6.c)

target_link_libraries(Act_02 Colors)
target_link_libraries(Act_03 Colors)
target_link_libraries(Act_04 Colors)
target_link_libraries(Act_05 Colors)
target_link_libraries(Act_06 Colors ${CURSES_LIBRARIES})
