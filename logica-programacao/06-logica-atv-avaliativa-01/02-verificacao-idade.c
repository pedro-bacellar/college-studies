#include <stdio.h>

int main(){

	int idade;

	printf("digite sua idade\n");
	scanf("%d", &idade);

	if(idade >= 0 && idade <= 12){
		printf("voce eh crianca.\n");
	}else

	if(idade >= 13 && idade <= 18){
		printf("voce eh adolescente.\n");
	}else

	if(idade >= 18 && idade <= 59){
		printf("voce eh adulto.\n");
	}else

	if(idade >= 60){
		printf("voce eh idoso.\n");
	}else

	printf("idade invalida.\n");

}