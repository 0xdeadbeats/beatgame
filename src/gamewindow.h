#ifndef H_GAMEWINDOW
#define H_GAMEWINDOW

#include "SDL2/SDL.h"
#include "input.h"
#include "sound.h"
#include <iostream>

class GameWindow
{
public:
	GameWindow(const char* title, int width, int height);
	~GameWindow();

	void ClearColor();
	void GameLoop();
	void Update();
	void Draw();
	void SetTitle(char* title);

private:
	SDL_Window* _window = nullptr;
	SDL_Surface* _surface = nullptr;
	bool _running = true;
};

#endif