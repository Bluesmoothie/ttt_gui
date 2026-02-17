#include "ttt_gui.hpp"

int main(int, char**)
{
	Video	video;

    if (video.init()) {
		return 1;
	}

	video.loop();
	// video.openDemo();

    return 0;
}