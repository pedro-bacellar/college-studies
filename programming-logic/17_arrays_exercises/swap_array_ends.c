#include <stdio.h>

int main(){
	
    char letters[] = {'A', 'B', 'C', 'D'};
    char temp;
    int size = sizeof(letters) / sizeof(letters[0]);
    int i;
    
    for(i = 0; i < size; i++){
        printf("%c", letters[i]);
    }
    
    printf("\n\n");
    
    temp = letters[0];
    letters[0] = letters[size - 1];
    letters[size - 1] = temp;
    
    for(i = 0; i < size; i++){
        printf("%c", letters[i]);
    }
}