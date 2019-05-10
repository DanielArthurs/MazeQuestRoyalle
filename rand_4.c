#include "header.h"



int rand_4(void){
	int x;
	x=rand();
	if(x>=0 && x < 8192){
		return 1;
	}
	if(x>=8192 && x < 16383){
		return 2;
	}
	if(x>=16383 && x < 24575){
		return 3;
	}
	if(x>=24575){
		return 4;
	}
	else{
		printf("%s", "error");
	}
}

/*

0
8192
16383
24575
32767
*/