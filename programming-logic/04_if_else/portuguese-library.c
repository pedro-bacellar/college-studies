#include <stdio.h>
#include <locale.h>

int main(){
	float sal_recebido, total;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n Informe seu salário: ");
	scanf("%f", &sal_recebido);
	printf("\n Informe o total de seus gastos: ");
	scanf("%f", &total);
	
	if(sal_recebido >= total){
		
		printf("\n gastos dentro do orçamento");
	}
	else
	printf("\n orçamento estourado");
	
	return 0;
}