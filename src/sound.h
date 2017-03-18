#ifndef H_SOUND
#define H_SOUND

#include "bass.h"
#include <thread>

class GameAudio
{
public:
	GameAudio(char* file);
	~GameAudio();

	void Play();
	uint64_t GetTime();
	uint64_t GetLength();

private:
	void handlePlay();
	char* _filename;
	HSTREAM _hstream;
};


#endif