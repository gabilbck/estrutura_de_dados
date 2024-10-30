/*
10) Elaborar um programa que mostre os 10 primeiros termos da série de Fibonacci. 
Esta série é definida pela seguinte regra: A partir do terceiro elemento, 
cada termo é a soma dos dois anteriores.
1 2 3 5 8 13 ...
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, n1 = 1, n2 = 1, prox, i;
    printf("%i, %i, ", n1, n2); 
    for (i = 2; i <= 10; i++) { 
        prox = n1 + n2;
        n1 = n2;
        n2 = prox;
        printf("%i, ", prox);
	}
    return 0;
}