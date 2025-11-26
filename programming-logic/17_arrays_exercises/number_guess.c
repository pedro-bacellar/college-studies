#include <stdio.h>

int main(){
	
	int numbers[] = {5, 10, 15, 20, 25};
	int guess = 0;
	int size = sizeof(numbers) / sizeof(numbers[0]);
	int found = 0;
	
	printf("Enter a number: ");
	scanf("%d", &guess);
	
	int i;
	
	for(i = 0; i < size; i++){
		
		if(numbers[i] == guess){
			found = 1;
			break;
		}
	}
	
	if(found){
		printf("\nNumero encontrado no vetor");
	}
	else{
		printf("\nNumero nao encontrado no vetor");
	}
}