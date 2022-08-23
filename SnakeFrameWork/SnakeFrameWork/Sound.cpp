#include <Windows.h>
#include <mmsystem.h>

#include "Sound.h"

Sound::Sound()
{
}

Sound::~Sound()
{
}
void Sound::playEatFoodSound()
{
	// plays a sound effect 
	bool soundPlayed = PlaySound( L"brick.wav", NULL, SND_ASYNC );
}

void Sound::playDieSound()
{
		// play sound effect
		bool soundPlayed = PlaySound( L"death.wav", NULL, SND_ASYNC );
	
}
