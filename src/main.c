#include "header.h"
int main(){
	srand(time(0));
	for(int i=0;i<30;i++){
		printf("%d", rand_ranged(1,4));
	}
}