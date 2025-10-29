		// 28.10.2025


#include <stdio.h>

int main(){
	
	char string[100];
	int i, cont = 0;
	
	printf("Digite uma frase: ");
	gets(string);
	
	for(i = 0; string[i] != '\0'; i++){
		if(string[i] == 'c')
		cont++;
	}
	printf("\ncaracteres c = %d", cont);
	
}