# Plotting Mandelbrot Set using SDL 2.0

Implementation of plotting the Mandelbrot Set using the SDL library for rendering. 

<img src="data/MandelbrotSet_img.png"/>


## Project Architecture
SDLWindow.h/.cpp:
	- Encapsulates the window display settings

MandelbrotSet.h/.cpp: 
	- Container class that holds an instance of SDLWindow
	- Class proprietary methods to compute the brightness and scale the pixel values

main.cpp:
	- Driver program and entry point for execution

## Udacity CppND Capstone Project rubric points addressed:
  
  README
  - [x] (All Rubric Points REQUIRED)
  
  Compiling and Testing
  - [x] (All Rubric Points REQUIRED)
  
  Loops, Functions, I/O
  - [x] The project demonstrates an understanding of C++ functions and control structures.
  
  Object Oriented Programming
  - [x] The project uses Object Oriented Programming techniques (SDLWindow.h/.cpp | MandelbrotSet.h/.cpp)
  - [x] Classes use appropriate access specifiers for class members (SDLWindow.h/.cpp | MandelbrotSet.h/.cpp)
  - [x] Class constructors utilize member initialization lists (MandelbrotSet.cpp, line 22)
  - [x] Classes abstract implementation details from their interfaces (SDLWindow.h/.cpp | MandelbrotSet.h/.cpp)



## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* SDL 2.0
	* Linux: `sudo apt install cmake libsdl2-dev g++`
	* Windows: https://www.libsdl.org/download-2.0.php
	
## Build and Run Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./mandelbrot`
