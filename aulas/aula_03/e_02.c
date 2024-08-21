/*
Construa um programa para calcular a área e de um círculo, 
a área deve ser do tipo de ponteiro
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    float valor_a;
    float *area = &valor_a;
    float pi = 3.14159265359, r;

    //A = PI * (R*R)

    printf("Digite o raio do circulo: ");
    scanf("%f", &r);
    *area = pi * (r*r);

    printf("area: ", *area);

    return 0;
}