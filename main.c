#include "header.h"
int main(){
	system("color 0a");
	srand(time(0));
	for(int i=0;i<30;i++){
		printf("%d", rand_4());
	}
}