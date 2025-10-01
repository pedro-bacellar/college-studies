#include <stdio.h>

int main(){
	
	int i;
	
	for(i = 1; i <= 10; i++){           // return numbers for 1 to 10
		printf("%d", i);
	}
	
    for(i = 1; i <= 10; i = i + 2){     // return odd numbers for 1 to 10
		printf("%d\n", i);
	}

}

