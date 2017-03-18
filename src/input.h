#ifndef H_INPUT
#define H_INPUT
#include "SDL2/SDL.h"

class Input
{
public:
    static bool IsKeyDown(uint8_t keycode);
    static bool IsKeyUp(uint8_t keycode);
};

#endif