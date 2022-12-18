#include "../include/Sound.h"


namespace Homemade
{
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