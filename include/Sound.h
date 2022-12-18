#include <iostream>

namespace Homemade
{
	class Sound
	{
	public:
		static void Play(const char* path);
		
		static int Init();
		static void Uninit();
	};
}
