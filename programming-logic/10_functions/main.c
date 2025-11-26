#include <stdio.h>

float desconto(float val, float perc){
	return val * perc;
}

int main(){
	float result, num1, num2;
	
	printf("Digite o valor de sua parcela: ");
	scanf("%f", &num1);
	
	printf("Digite o valor da compra: ");
	scanf("%f", &num2);
	
	result = desconto(num1, num2);
	
	printf("resultado = %.2f", result);
}