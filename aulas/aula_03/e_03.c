#include <stdio.h>
#include <stdlib.h>

void soma(int *x, int *y, int *resultado);
void subtracao(int *x, int *y, int *resultado);
void multiplicacao(int *x, int *y, int *resultado);

int main(void) {
    int a, b, resultado;

    printf("Digite valor de x: ");
    scanf("%i", &a);
    printf("Digite valor de y: ");
    scanf("%i", &b);

    soma(&a, &b, &resultado);
    subtracao(&a, &b, &resultado);
    multiplicacao(&a, &b, &resultado);

    return 0;
}

void soma(int *x, int *y, int *resultado) {
    *resultado = *x + *y;
    printf("x = %i, y = %i\n", *x, *y);
    printf("Soma: %i\n\n", *resultado);
}

void subtracao(int *x, int *y, int *resultado) {
    *resultado = *x - *y;
    printf("x = %i, y = %i\n", *x, *y);
    printf("Subtracao: %i\n\n", *resultado);
}

void multiplicacao(int *x, int *y, int *resultado) {
    *resultado = *x * *y;
    printf("x = %i, y = %i\n", *x, *y);
    printf("Multiplicacao: %i\n\n", *resultado);
}