#include "gameworld.h"

GameWorld::GameWorld()
{

}

GameWorld::~GameWorld()
{
    
}

void GameWorld::Update()
{
    for(int i = 0; i < _objects.size(); i++)
    {
        _objects[i].Update();
    }
}

void GameWorld::Draw()
{
    for(int i = 0; i < _objects.size(); i++)
    {
        _objects[i].Draw();
    }
}