/*
3. Construa um programa que contém duas variáveis inteiras, e cada uma destas 
variáveis deverá ter um valor atribuído nelas, através de uma entrada de dado do 
usuário. Também elaborem no mesmo programa três funções, que deveram usar o 
conceito de ponteiro para manipular a passagem dos dados para as funções. 
As funções deverão ter as seguintes funcionalidades: a soma das duas variáveis, 
a diferença entre as duas variáveis e a multiplicação das duas variáveis. 
*/
#include <stdio.h>
#include <stdlib.h>

void soma(int *r, int *a, int *b);
void diferenca(int *r, int *a, int *b);
void multiplicacao(int *r, int *a, int *b);

int main(void){
	int r, a, b;
	
	printf("Digite o 1 numero: ");
	scanf("%i",&a);
	printf("Digite o 2 numero: ");
	scanf("%i",&b);
	
	soma(&r,&a,&b);
	printf("A soma e %i\n",r);
	diferenca(&r,&a,&b);
	printf("A diferenca e %i\n",r);
	multiplicacao(&r,&a,&b);
	printf("A multiplicacao e %i\n",r);
	
	
	return 0;
}

void soma(int *r, int *a, int *b){
	*r=*a+*b;
}
void diferenca(int *r, int *a, int *b){
	*r=*a-*b;
}
void multiplicacao(int *r, int *a, int *b){
	*r=*a**b;
}
