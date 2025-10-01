#include <stdio.h>

int main(){

    float total, final;
    int pagamento;

    printf("digite o valor da compra: ");
    scanf("%f", &total);

    printf("qual a forma de pagamento: ");
    printf("digite: 1 - a vista\n2 - cartao");
    scanf("%d", &pagamento);

    switch(pagamento){

        case 1:
        final = total * 0.85;

        printf("o total eh:%f", final);
        break;
    
        case 2:
        printf("o total eh:%f", total);
        break;

        default:
        printf("forma de pagamento invalida");
        break;
    }

}