#include "SDL2/SDL.h"
#include "gamewindow.h"
#include "bass.h"
#include <iostream>

int main()
{
    //Initialize BASS
    BASS_Init(-1, 44100, BASS_DEVICE_STEREO, NULL, NULL);

    std::cout << "[Audio] BASS Initialzed with code: " << BASS_ErrorGetCode() << "." << std::endl;

    //Initialize SDL
    SDL_Init(SDL_INIT_EVERYTHING);

    //Create Game Window.
    GameWindow* gm = new GameWindow("Beat Game", 500, 500);

    //Run the GameLoop.
    gm->GameLoop();
    return 0;
}