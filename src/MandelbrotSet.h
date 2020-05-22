#ifndef MANDELBROTSET_H
#define MANDELBROTSET_H

#include <complex>
#include "SDLWindow.h"

//#include <chrono>
//#include <iostream>
//using namespace std::chrono;

// container class for SDLWindow instance
class MandelbrotSet
{

public:
    MandelbrotSet(int, int, int);
    void draw();

private:
    int max_iterations;
    SDLWindow sdlWinObj;

    int calcBrightness(int,int);
};

#endif