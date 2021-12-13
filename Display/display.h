#ifndef DISPLAY_H_
#define DISPLAY_H_

#include <stdint.h>

typedef uint16_t* display_frame_buffer_t;
typedef uint16_t  display_frame_base_t;

uint16_t display_get_width(void);

uint16_t display_get_height(void);


#endif /* DISPLAY_H_ */