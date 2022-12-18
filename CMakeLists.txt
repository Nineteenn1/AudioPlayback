project(AudioPlayback)

set(AP_SOURCES src/Sound.cpp include/Sound.h external/miniaudio/miniaudio.h)

add_library(${PROJECT_NAME} STATIC ${AP_SOURCES})