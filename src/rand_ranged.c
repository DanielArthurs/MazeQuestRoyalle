#include "header.h"

int rand_ranged(int lower, int upper){ //make sure to have srand called before this is used, otherwise the randomness will not be random =)
	return (rand() % (upper - lower +1)) + 1; 
}