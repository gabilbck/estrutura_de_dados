/*
1) Um programa que contém duas variáveis inteiras e cada uma destas variáveis deve
ter um valor atribuído. Escrever um programa que mostre os seguintes resultados:

a) A soma das duas variáveis.
b) A diferença entre as duas variáveis.
c) O dobro da primeira mais o triplo da segunda variável.
d) A multiplicação das duas variáveis.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b, soma, dif, mult1, mult2;
    
    printf("Digite o primeiro numero\n");
    scanf("%i", &a);
    fflush(stdin);
    
    printf("Digite o segundo numero\n");
    scanf("%i", &b);
    fflush(stdin);
    
    soma = a+b;
    printf("%i + %i = %i\n", a, b, soma);
    
    dif = a-b;
    printf("%i - %i = %i\n", a, b, dif);
    
    mult1 = (a*2)+(b*b*b);
    printf("%i - %i = %i\n", a, b, mult1);
    
    mult2 = a*b;
    printf("%i * %i = %i\n", a, b, mult2);
    
    return 0;
}