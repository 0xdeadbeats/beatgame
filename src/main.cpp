#include "SDL2/SDL.h"
#include "gamewindow.h"

int main()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    GameWindow* gm = new GameWindow("0xdeadbeats 0.1.imgay", 500, 500);
    gm->GameLoop();
    return 0;
}