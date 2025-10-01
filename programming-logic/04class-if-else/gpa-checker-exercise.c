#include <stdio.h>

int main(){
	
	float nota1, nota2, nota3, media;
	
	printf("digite a nota V1: ");
	scanf("%f", &nota1);
	printf("digite a nota V2: ");
	scanf("%f", &nota2);
	printf("digite a nota V3: ");
	scanf("%f", &nota3);
	
	//calcular a media final
	media = (nota1 + nota2 + nota3) / 3;
	
	//verificar situação do aluno
		if (media >= 5 && nota3>=4){
//		if (nota3 >= 4)
		printf ("aprovado !");
	}
	else 
		printf ("reprovado xD");
			
}