#include "sound.h"

GameAudio::GameAudio(char* title)
{
	_filename = title;
	_hstream = BASS_StreamCreateFile(false, _filename, 0, 0, BASS_SAMPLE_FLOAT | BASS_STREAM_PRESCAN);
}

GameAudio::~GameAudio()
{
	BASS_StreamFree(_hstream);
}

void handlePlay()
{
	//Play the audio.
	BASS_ChannelPlay(_hstream, false);
}

void GameAudio::Play()
{
	std::cout << "[Audio] play: " << _filename;

	//Starts a new thread to play the audio.
	std::thread(handlePlay);
}

uint64_t GameAudio::GetLength()
{
	//Returns the length of this audio in bytes.
	return BASS_ChannelGetLength(_hstream, BASS_POS_BYTE);
}

uint64_t GameAudio::GetTime()
{
	//Returns the current playing byte.
	return BASS_ChannelGetPosition(_hstream, BASS_POS_BYTE);
}