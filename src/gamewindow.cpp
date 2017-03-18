#include "gamewindow.h"

GameWindow::GameWindow(const char* title, int width, int height)
{
    //Create a window, and give the result back to our variable
    _window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_RESIZABLE);
    
    //Get the surface from the window we've created.
    _surface = SDL_GetWindowSurface(_window);
}

void GameWindow::Update()
{

}

void GameWindow::Draw()
{
    
}

void GameWindow::GameLoop()
{
    while(_running)
    {
        //Update game
        Update();
        //Draw Game
        Draw();
    }
}

