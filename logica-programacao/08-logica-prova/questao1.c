#include <stdio.h>

int main(){

    int valor = 20;

    if(valor % 2 == 0){

        valor = valor + 5;
    }
    else{
        valor = valor - 5;
    }

    printf("valor eh:%d", valor);

}

// 15
// 20
// 25
// o codigo tem erro