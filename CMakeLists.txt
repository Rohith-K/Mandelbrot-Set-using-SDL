cmake_minimum_required(VERSION 3.7)
project(mandelbrot)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(mandelbrot 
    src/main.cpp 
    src/MandelbrotSet.cpp
    src/SDLWindow.cpp
    src/SDLWindow.h
    src/MandelbrotSet.h
)
target_link_libraries(mandelbrot ${SDL2_LIBRARIES})