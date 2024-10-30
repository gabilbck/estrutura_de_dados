/*
7) Crie um programa que declare uma base e 
um expoente e, em seguida, mostre o valor da potência.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int base=0, po=0, aux=1;

    printf("Digite o numero da base: ");
    scanf("%i", &base);
    fflush(stdin);

    printf("\n\nDigite o numero da potencia: ");
    scanf("%i", &po);
    fflush(stdin);

    for(int i=1; i<=po; i++){
        aux *= base ;
    }
    printf("\n%i\n", aux);
    return 0;
}