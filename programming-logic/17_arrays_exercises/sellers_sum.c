#include <stdio.h>

int main(){
	
	int sellers[][2] = {{100, 50}, 
						  {200, 100},
						  {50, 20}};
						  
	int sum = 0;
	int i;
	
	for(i = 0; i < 2; i++){
		printf("%d ", sellers[0][i]);
		sum += sellers[0][i];
	}

	printf("\nSum: %d", sum);

}