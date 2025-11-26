#include <stdio.h>

int main(){

	int num;

	printf("digite um numero inteiro para descobrir se ele eh negativo, positivo, ou zero\n");
	scanf("%d", &num);

	if(num < 0){
		printf("o numero eh negativo.\n");
	}else

	if(num == 0){
		printf("o numero eh zero.\n");
	}else

	if(num > 0){
		printf("o numero eh positivo.\n");
	}else

	printf("valor invalido.\n");

}