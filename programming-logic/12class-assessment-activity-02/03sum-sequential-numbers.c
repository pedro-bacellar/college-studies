#include <stdio.h>

int somarValores(int limite){
	
	int i = 1;
	int total = i;
	
	while(i < limite){
		i++;
		total = total + i;
	}
	
	return total;

}

int main(){
	
	int num = 5;
	
	printf("%d", somarValores(num));
}