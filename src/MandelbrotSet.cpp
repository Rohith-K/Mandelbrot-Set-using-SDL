#include "MandelbrotSet.h"

int MandelbrotSet::calcBrightness(int x, int y)
{
    std::complex<float> point((float)x / sdlWinObj.width - 1.5, (float)y / sdlWinObj.height - 0.5);
    std::complex<float> z(0, 0);

    unsigned int nb_iter = 0;

    while (abs(z) < 2 && nb_iter <= max_iterations)
    {
        z = z * z + point;
        nb_iter++;
    }

    if (nb_iter < max_iterations)
        return (255 * nb_iter) / (max_iterations);
    else
        return 0;
}

MandelbrotSet::MandelbrotSet(int w, int h, int max_iter):sdlWinObj(w, h)
{
    max_iterations = max_iter;
}


void MandelbrotSet::draw()
{
    while (true)
    {   
        //auto start = high_resolution_clock::now();
        SDL_RenderPresent(sdlWinObj.renderer);
        
        for (int x = 0; x < sdlWinObj.width; x++)
        {

            if (SDL_PollEvent(&sdlWinObj.event) && sdlWinObj.event.type == SDL_QUIT)
                return;
            for (int y = 0; y < sdlWinObj.height; y++)
            {
                int bright = calcBrightness(x, y);

                auto scale = [](double value, double in_min, double in_max, double out_min, double out_max){
                    return (value - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
                };

                int red = scale(bright * bright, 0, 255, 0, 255);
                int green = scale(bright, 0, 255, 0, 255);
                int blue = scale(sqrt(bright), 0, sqrt(255), 0, 255);
                
                SDL_SetRenderDrawColor(sdlWinObj.renderer, red, green, blue, 255);
                SDL_RenderDrawPoint(sdlWinObj.renderer, x, y);
            }
        }
        //auto stop = high_resolution_clock::now(); 
        //auto duration = duration_cast<microseconds>(stop - start); 
        //std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl; 
    }
}