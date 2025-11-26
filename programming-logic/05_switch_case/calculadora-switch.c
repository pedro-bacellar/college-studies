#include <stdio.h>

int main(){
	
	float num1, num2, sum, sub, mult, div;
	int operador;
	
	printf("digite o primeiro numero \n");
	scanf("%f", &num1);
	
	printf("digite o segundo numero \n");
	scanf("%f", &num2);
	
	printf("escolha um operador relacional: \n1 - soma\n2 - subtracao\n3 - multiplicacao \n4 - divisao\n");
	scanf("%d", &operador);
	
	switch (operador){
		case 1:
        sum = num1 + num2;
			printf("o resultado eh: %.2f\n", sum);
			break;
		
		case 2:
        sub = num1 - num2;
			printf("o resultado eh: %.2f\n", sub);
			break;
			
		case 3:
        mult = num1 * num2;
			printf("o resultado eh: %.2f\n", mult);
			break;

        case 4:
        div = num1 / num2;
            printf("o resultado eh: %.2f\n", div);
            break;
			
		default:
			printf("nao informado\n");
			
	}

return 0;
}