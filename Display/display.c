#include "display.h"
extern uint16_t* LCDFrameBuffer;

uint16_t display_get_width(void)
{
    uint16_t width = 480;
	return width;
}

uint16_t display_get_height(void)
{
    uint16_t height = 272;
	return height;
}