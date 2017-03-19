#include "gameworld.h"

GameWorld::GameWorld()
{

}

GameWorld::~GameWorld()
{
    
}

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