#include <stdio.h>

int main(){
	
	int i = 13;
	int j = 21;
	
            // create a comment to hide codes
	
	while(i <= 21){
		printf("%d\n", i);
		i++;
	}
	
	while(i <= 21){
		printf("%d\n", i);
		i = i + 2;
	}

	while(i <= 21){
		printf("%d\n", i);
		i = i + 3;
	}
	
	while(j >= 13){
		printf("%d\n", j);
		j--;
	}
	
	while(j >= 13){
		printf("%d\n", j);
		j = j - 2;	
	}
	
	while(j >= 12){
		printf("%d\n", j);
		j = j - 3;	
	}
}