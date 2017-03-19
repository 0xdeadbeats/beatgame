#include "gamewindow.h"

GameWindow::GameWindow(const char* title, int width, int height)
{
    //Create a window, and give the result back to our variable
    _window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_RESIZABLE);
    
    //Get the surface from the window we've created.
    _surface = SDL_GetWindowSurface(_window);
}

GameWindow::~GameWindow()
{
    SDL_Quit();
}

void GameWindow::ClearColor()
{
    SDL_LockSurface(_surface);
    SDL_FillRect(_surface, NULL, SDL_MapRGB(_surface->format, 0, 0, 0));
    SDL_UnlockSurface(_surface);
}

void GameWindow::Update()
{
    if (Input::IsKeyDown(SDL_SCANCODE_ESCAPE)) {
        _running = false;
    }
}

void GameWindow::SetTitle(char* title)
{
    SDL_SetWindowTitle(_window, title);
}

void GameWindow::Draw()
{
    ClearColor();
    SDL_UpdateWindowSurface(_window);
}

void GameWindow::GameLoop()
{
    while(_running)
    {
        //Update game
        Update();
        //Lock window surface
        SDL_LockSurface(_surface);

        //Draw Game
        Draw();

        //Unlock window surface
        SDL_UnlockSurface(_surface);
    }
}

