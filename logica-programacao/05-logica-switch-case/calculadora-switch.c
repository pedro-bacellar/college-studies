#include <stdio.h>

int main(){
	
	int num1, num2, sum, sub, mult, div, operador;
	
	printf("digite o primeiro numero \n");
	scanf("%d", &num1);
	
	printf("digite o segundo numero \n");
	scanf("%d", &num2);
	
	printf("escolha um operador logico: \n1 - soma\n2 - subtracao\n3 - multiplicacao \n4 - divisao\n");
	scanf("%d", &operador);
	
	switch (operador){
		case 1:
        sum = num1 + num2;
			printf("o resultado eh: %d\n", sum);
			break;
		
		case 2:
        sub = num1 - num2;
			printf("o resultado eh: %d\n", sub);
			break;
			
		case 3:
        mult = num1 * num2;
			printf("o resultado eh: %d\n", mult);
			break;

        case 4:
        div = num1 / num2;
            printf("o resultado eh: %d\n", div);
            break;
			
		default:
			printf("nao informado\n");
			
	}

system("pause");
return 0;
}