/*
* renamed this file from rand_ranged.c, will use it for other random generation related functions
*/
#include "header.h"

int32_t rand_ranged(int32_t lower, int32_t upper){ //make sure to have srand called before this is used, otherwise the randomness will not be random =)
	return (rand() % (upper - lower +1)) + 1; 
}