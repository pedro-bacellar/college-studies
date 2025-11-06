#include <stdio.h>

void asterisco(){
	
	
	int i;

	
	for(i = 0; i < 20; i++){
		
		printf("*");
	}
	
	printf("\n");
}

int main(){
	
	int i;
	
	for (i = 0; i<3 ;i++){
		asterisco();
	}
}