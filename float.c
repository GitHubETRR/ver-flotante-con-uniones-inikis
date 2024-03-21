#include <stdio.h>

int main(void){
    float numero;

    printf("Elija su numero: ");
    scanf("%f", &numero);

    union{
        float var;
        unsigned char vect[4];
        struct //campo de bits
        {
            unsigned int bit0 : 1;
            unsigned int bit1 : 1;
            unsigned int bit2 : 1;
            unsigned int bit3 : 1;
            unsigned int bit4 : 1;
            unsigned int bit5 : 1;
            unsigned int bit6 : 1;
            unsigned int bit7 : 1;
            unsigned int bit8 : 1;
            unsigned int bit9 : 1;
            unsigned int bit10 : 1;
            unsigned int bit11 : 1;
            unsigned int bit12 : 1;
            unsigned int bit13 : 1;
            unsigned int bit14 : 1;
            unsigned int bit15 : 1;
        }bits;
    }floatNum;
    floatNum.bits.bit0=1;
    floatNum.var=numero;

    for(int i=0; i<4; i++){
        printf("%x |",floatNum.vect[i]);
    }

    int bitElegido = 0;
    int nuevoValor = 0;
    printf("\nElija un bit del 0 al 15 para modificar de su float: ");
    scanf("%d", &bitElegido);

    printf("\nElija el nuevo valor (0 o 1) del bit %d: ",&bitElegido);
    scanf("%d", &nuevoValor);

    //TODO: como definir el bit especificado

    //Utilizar un puntero para poder ver el contenido de los 4 bytes dentro de una variable float de a uno.
    char * punt1byte_floatNum = &floatNum.var;
    for (int i = 0; i < 4; i++){
        printf("\nByte %d del float: \n\t- HEX:%x\n\t- DEC:%d\n",i+1,*punt1byte_floatNum,*punt1byte_floatNum);
        punt1byte_floatNum++;
    }
}
