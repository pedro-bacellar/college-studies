#include <stdio.h>

int main(){
	
	int i = 1;
	
	while(i <= 10){
		printf("%d", i);        // return numbers for 1 to 10
		i++;
	}
	

	while(i <= 10){
		printf("%d\n", i);
		i = i + 2;              // return odd numbers for 1 to 10
	}


}