/*
1. Construa um programa para calcular uma equação de segundo grau, onde x' e x'' 
deverão ser um ponteiro, imprima o valor de x'e x'' após a execução do programa. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void equacao(float *x1, float *x2, float a, float b, float c);

int main(void){
	// variáveis
	float X1, X2, A, B, C;
	
	// Entrada
	printf("Digite o valor de A: ");
	scanf("%f",&A);
	printf("Digite o valor de A: ");
	scanf("%f",&B);
	printf("Digite o valor de A: ");
	scanf("%f",&C);
	
	// processamento
	equacao(&X1,&X2,A,B,C);
	
	// Saída
	printf("Os valores sao: \nX1 = %f\nX2 = %f\n",X1,X2);
	
	return 0;
}

void equacao(float *x1, float *x2, float a, float b, float c){
	float delta = pow(b,2)-4*a*c;
	*x1 = (-b + sqrt(delta))/2*a;
	*x2 = (-b - sqrt(delta))/2*a;
}