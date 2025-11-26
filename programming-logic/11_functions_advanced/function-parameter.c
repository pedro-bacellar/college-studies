#include <stdio.h>

int sum(int a, int b){
	
	return a + b;
	
}

int main(){
	
	int num1, num2, num3, result;
	
	printf("First number: ");
	scanf("%d", &num1);
	
	printf("Second number: ");
	scanf("%d", &num2);
	
	printf("Third number: ");
	scanf("%d", &num3);
	
	result = sum(sum(num1, num2), num3);
	
	printf("Result: %d", result);

}