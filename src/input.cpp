#include "input.h"

bool Input::IsKeyDown(uint8_t keycode)
{
    SDL_PumpEvents();
    //Prepare a variable for use
    int elements = 0;
    
    //Find the current pressed keys, and put them into the array called "keys".
    const uint8_t* keys = SDL_GetKeyboardState(&elements);
    
    //If the array "keys" contains the selected key.
    if (keys[keycode]) {

        //Return true (duh!)
        return true;
    }

    //No, the key wasn't pressed, return false.
    return false;
}

bool Input::IsKeyUp(uint8_t keycode)
{
    //Reverse what IsKeyDown does.
    return !Input::IsKeyDown(keycode);
}