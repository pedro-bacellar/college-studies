#include <stdio.h>

int main(){
	
	int i, num, sum;
	
	printf("Tabuada do: ");
	scanf("%d", &num);
	
	for(i = 0;i < 11; i++){	
	
		sum = i * num;
		
		printf("resultado = %d\n", sum);
	}
}