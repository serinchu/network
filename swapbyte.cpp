#include "swapbyte.h"
#include <stdio.h>

uint16_t ntoh_2(uint16_t src) {
	return ( src >> 8 ) | ( src << 8 );
}

uint32_t ntoh_4(uint32_t src) {
	uint16_t front = (src >> 16);
	uint16_t end = (uint16_t)src;
	return ((ntoh_2(end) << 16) | ((uint32_t)ntoh_2(front)));
}