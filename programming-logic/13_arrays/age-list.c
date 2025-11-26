		// 28.10.2025

#include <stdio.h>

int main(){
	int i, idade, idades[5];
	for(i = 0; i < 5; i++){
		
		printf("Digite a idade: ");
		scanf("%d", &idade);
		idades[i] = idade;
	}
	
	for(i = 0; i < 5; i++){
		printf("%d ", idades[i]);
	}
	
}