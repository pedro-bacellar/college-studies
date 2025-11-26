#include <stdio.h>

int main(){
	
	int i, num;
	
	for(i = 0; i <= 100; i++){
		
		if(i % 2 == 0){
			
		num += i;
			
		}
	}
	
	printf("%d\n", num);
	
}