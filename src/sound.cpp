#include "sound.h"

GameAudio::GameAudio(char* title)
{
	_filename = title;
	_hstream = BASS_StreamCreateFile(FALSE, _filename, 0, 0, BASS_STREAM_PRESCAN);
    std::cout << "[Audio] BASS Initialzed audio with code: " << BASS_ErrorGetCode() << "." << std::endl;
	if (_hstream == NULL)
	{
		std::cout << "Failed creating audio!" << std::endl;
	}
	BASS_ChannelGetInfo(_hstream, &_info);
}

GameAudio::~GameAudio()
{
	BASS_StreamFree(_hstream);
}

void GameAudio::Play()
{
	std::cout << "[Audio] play: " << _filename << std::endl;

	bool outcome = BASS_ChannelPlay(_hstream, false);

	std::cout << "[Audio] Error " << BASS_ErrorGetCode() << "!" << std::endl;
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

double GameAudio::GetTimeS()
{
	return BASS_ChannelBytes2Seconds(_hstream, GetTime());
}

double GameAudio::GetTimeMS()
{
	return GetTimeS()*60;
}