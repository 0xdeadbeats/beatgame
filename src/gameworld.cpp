#include "gameworld.h"

void GameWorld::Update()
{
    for(int i = 0; i < objects.size(); i++)
    {
        objects[i].Update();
    }
}

void GameWorld::Draw()
{
    for(int i = 0; i < objects.size(); i++)
    {
        objects[i].Draw();
    }
}