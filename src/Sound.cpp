#include "../include/Sound.h"

#define MINIAUDIO_IMPLEMENTATION
#include "../external/miniaudio/miniaudio.h"


namespace Homemade
{
	static ma_result result;
	static ma_engine engine;

	void Sound::Play(const char* path)
	{
		ma_engine_play_sound(&engine, path, NULL);

		getchar();
	}

	int Sound::Init()
	{
		result = ma_engine_init(NULL, &engine);
		if (result != MA_SUCCESS) 
		{
			printf("Failed to initialize audio engine.");
			return -1;
		}
	}

	void Sound::Uninit()
	{
		ma_engine_uninit(&engine);
	}
}
