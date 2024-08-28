/*
2. Construa um programa para calcular a área e de um círculo, a área deve ser 
do tipo de ponteiro
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void area(float *a, float r);

int main(void){
	// variáveis
	float A, R;
	
	// entrada
	printf("Digite o raio: ");
	scanf("%f",&R);
	
	// processamento
	area(&A,R);
	
	// saída
	printf("A area e %f\n",A);
	
	return 0;
}

void area(float *a, float r){
	*a = M_PI*pow(r,2);
}