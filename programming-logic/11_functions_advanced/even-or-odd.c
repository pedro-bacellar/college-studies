#include <stdio.h>

int evenOrOdd(int a){
	
	if(a % 2 == 0){
		return 1;
	} 
	else{
		return 0;
	}
}

int main(){
	
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(evenOrOdd(num)){
		printf("Even", num);
	}
	else{
		printf("Odd", num);
	}
}