#include "SDL2/SDL.h"
#include "gamewindow.h"

int main()
{
    //Initialize BASS
    BASS_Init(-1);

    //Initialize SDL
    SDL_Init(SDL_INIT_EVERYTHING);

    //Create Game Window.
    GameWindow* gm = new GameWindow("0xdeadbeats 0.1.imgay", 500, 500);
    
    //Run the GameLoop.
    gm->GameLoop();
    return 0;
}