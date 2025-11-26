#include <stdio.h>

int main(){

	float num1, num2, result;
	char operador;

	printf("digite o primeiro numero.\n");
	scanf("%f", &num1);

	printf("digite o segundo numero.\n");
	scanf("%f", &num2);

	printf("digite o operador matematico:\n'+' -> soma\n'-' -> subtracao\n'*' -> multiplicacao \n'/' -> divisao\n");
	scanf("%s", &operador);

	switch(operador){
		case '+':
		result = num1 + num2;
		printf("o resultado de %.2f + %.2f eh igual a %.2f", num1, num2, result);
		break;

		case '-':
		result = num1 - num2;
		printf("o resultado de %.2f - %.2f eh igual a %.2f", num1, num2, result);
		break;

		case '*':
		result = num1 * num2;
		printf("o resultado de %.2f * %.2f eh igual a %.2f", num1, num2, result);
		break;

		case '/':
		if(num2 == 0){
		printf("divisao por zero eh invalida.\n");
		break;
		}else

		result = num1 / num2;
		printf("o resultado de %.2f / %.2f eh igual a %.2f", num1, num2, result);
		break;

		default:
		printf("nao informado.\n");

	}


}