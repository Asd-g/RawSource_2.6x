cmake_minimum_required(VERSION 3.1)

project(RawSourcePlus)

find_library(AVS_FOUND avisynth)
if (NOT AVS_FOUND)
    message(FATAL_ERROR "AviSynth+ not found.")
else()
    message(STATUS "AviSynth+ : ${AVS_FOUND}")
endif()

set(CMAKE_CXX_FLAGS " -Wall -Wextra -O3 -fPIC ")

#include_directories("include/")

file(GLOB SOURCES "../src/*.cpp")

add_library(rawsourceplus SHARED ${SOURCES})

# I won't worry about installation ATM
#install(TARGETS rawsourceplus DESTINATION /usr/local/lib)

