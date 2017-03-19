#ifndef H_SPRITE
#define H_SPRITE

class Sprite
{
public:
    Sprite(char* file);
    ~Sprite();

private:
    char* _file;
};

#endif