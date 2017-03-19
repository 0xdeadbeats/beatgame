#ifndef H_GAMEWORLD
#define H_GAMEWORLD

#include "gameobject.h"
#include <vector>

class GameWorld
{
public:
    GameWorld();
    ~GameWorld();

    void Update();
    void Draw();

private:
    std::vector<GameObject> objects;
};

#endif