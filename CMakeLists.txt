cmake_minimum_required(VERSION 3.16)
project(BloomProject C)
set(CMAKE_C_STANDARD 90)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -ansi ")

set(PROJECT_HEADERS
        bitarray.h
        filter.h
        )

set(PROJECT_SOURCES
        test.c
        bitarray.c
        filter.c
        )

add_executable(MAIN_BLOOM ${PROJECT_SOURCES} ${PROJECT_HEADERS})
target_link_libraries(MAIN_BLOOM m)