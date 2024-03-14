#include <stdio.h>

int main(void){
    int numero;

    printf("Elija su numero: ");
    scanf("%d", &numero);

    union decimal{
        float var;
        unsigned char vect[4];
    }numeroDecimal;

    numeroDecimal.var=numero;

    //printf("\nExpresar en... \n\t1. Hexa\n\t2. Binario\n\n");

    for(int i=0; i<4; i++){
        printf("%x |",numeroDecimal.vect[i]);
    }
}