#ifndef SDLWINDOW_H
#define SDLWINDOW_H

#include "SDL2/SDL.h"

class SDLWindow
{
public:
    int width;
    int height;

    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Event event;

    SDLWindow(int&,int&);

private:
};

#endif