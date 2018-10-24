#include <iostream>
#include <SDL.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "Screen.h"
#include "Emitter.h"
using namespace std;
using namespace sdll;

const static double screen_xscale = Screen::SCREEN_WIDTH / 2;
const static double screen_yscale = Screen::SCREEN_HEIGHT / 2;

int main(int argc, char *argv[])
{

    srand(time(NULL));
    Screen screen;


    if (screen.init() == false)
    {
        cout << "Error initializing SDL." << endl;
        return 1;
    }

    // create emitter
    Emitter emitter;

    // Game loop

    while (true)
    {
        // Update particles
        // Draw particles
        // Setup colors
        int elapsed = SDL_GetTicks();
        unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
        unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0005)) * 128);
        unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0007)) * 128);

        const Particle *const pParticles = emitter.getParticles();
        //screen.clear();
        emitter.update(elapsed);

        for (int i = 0; i < Emitter::NPARTICLES; i++)
        {
            Particle particle = pParticles[i];
            // draw particles
            int x = (particle.m_x + 1) * screen_xscale;
            int y = (particle.m_y ) * screen_xscale + screen_yscale;
            screen.setPixel(x, y, red, green, blue);
        }

        screen.boxBlur();

        screen.update();

        // Check for messages
        if (screen.processEvents() == false) // check for events
        {
            break;
        }
    }
    screen.close();
    return 0;
}