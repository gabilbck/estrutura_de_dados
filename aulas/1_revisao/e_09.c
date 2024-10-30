/*
9) Escrever um programa que calcule o número fatorial de um número.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n=0, aux=1;

    printf("Digite o numero: ");
    scanf("%i", &n);
    fflush(stdin);

    for(int i=1; i<=n; i++){
        aux *= i ;
    }
    printf("\n%i\n", aux);
    return 0;
}