/*
1. Construa um programa para calcular uma equação de segundo grau, 
onde x' e x'' deverão ser um ponteiro, imprima o valor de x'e x'' 
após a execução do programa.  
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	float a, b, c, delta;
	float x1_valor, x2_valor;  // Variáveis para armazenar os valores das raízes
    float *x1 = &x1_valor;     // Ponteiro apontando para x1_valor
    float *x2 = &x2_valor;     // Ponteiro apontando para x2_valor

	//ax*ax + bx + c = 0
	//DELTA = b*b - 4 * a * c
	//x1 = -b + (raiz)DELTA / 2 * a
	//x2 = -b - (raiz)DELTA / 2 * a

	printf("Insira o valor de a: ");
	scanf("%f", &a);
	printf("Insira o valor de b: ");
    scanf("%f", &b);
	printf("Insira o valor de c: ");
	scanf("%f", &c);
	
	delta = (b * b) - (4 * a * c);

    if (delta >= 0) { //se delta positivo
        delta = sqrt(delta);
        *x1 = (-b + delta) / (2 * a);
        *x2 = (-b - delta) / (2 * a);
        printf("x1: %f\nx2: %f\n", *x1, *x2);
    } else {
        printf("Delta negativo (%f), equação não possui raízes reais.\n", delta);
    }

    return 0;
}