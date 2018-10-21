#include <iostream>
#include <SDL.h>
#include "Screen.h"
#include <math.h>
using namespace std;
using namespace sdll;

int main(int argc, char *argv[])
{
    Screen screen;

    if (screen.init() == false)
    {
        cout << "Error initializing SDL." << endl;
        return 1;
    }

    // Game loop
    while (true)
    {
        // Update particles
        // Draw particles

        // Setup colors
        int elapsed = SDL_GetTicks();
        unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
        unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
        unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);

        // Check for messages
        if (screen.processEvents() == false) // check for events
        {
            break;
        }

        for (int y = 0; y < Screen::SCREEN_HEIGHT; y++)
        {
            for (int x = 0; x < Screen::SCREEN_WIDTH; x++)
            {
                screen.setPixel(x, y, red, green, blue);
            }
        }
        screen.update();
    }
    screen.close();
    return 0;
}