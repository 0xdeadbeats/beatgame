#ifndef H_SOUND
#define H_SOUND

#include "bass.h"
#include <thread>
#include <iostream>

class GameAudio
{
public:
	GameAudio(char* file);
	~GameAudio();

	void Play();
	uint64_t GetTime();
	double GetTimeS();
	double GetTimeMS();
	uint64_t GetLength();

private:
	void handlePlay();
	char* _filename;
	HSTREAM _hstream;
	BASS_CHANNELINFO _info;
};


#endif