#include <iostream>
#include <stdio.h>


#define SDL_MAIN_HANDLED
extern "C"
{
#include "SDL.h"
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libswscale/swscale.h"
#include "libavutil/imgutils.h"
};

int main()
{
	av_register_all();
	if (SDL_Init(SDL_INIT_VIDEO)) {
		printf("Could not initialize SDL - %s\n", SDL_GetError());
		return -1;
	}
    std::cout << "Hello World!\n";
}