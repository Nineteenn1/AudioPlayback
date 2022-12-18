#define MINIAUDIO_IMPLEMENTATION
#include "../external/miniaudio/miniaudio.h"

#include <iostream>

namespace Homemade
{
	class Sound
	{
	public:
		void Play(const char* path);
		
		int Init();
		void Uninit();
	private:
		ma_result result;
		ma_engine engine;
	};
}