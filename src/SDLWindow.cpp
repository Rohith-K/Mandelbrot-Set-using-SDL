#include "SDLWindow.h"

SDLWindow::SDLWindow(int& w, int& h) : width(w), height(h)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_CreateWindowAndRenderer(width, height, 0, &window, &renderer);
}