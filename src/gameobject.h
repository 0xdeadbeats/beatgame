#ifndef H_GAMEOBJECT
#define H_GAMEOBJECT

#include "vector2d.h"

class GameObject
{
public:
    GameObject();
    ~GameObject();

    void Update() = 0;
    void Draw() = 0;

private:
    Vector2D _pos;
};


#endif