/*
4. Faça um programa que peça um número para calcular o fatorial. Deve tem uma 
função para calcular o fatorial (por referência)
*/

#include <stdio.h>
#include <stdlib.h>

void fatorial(double n, double *r);

int main(void){
	// variáveis
	double n, r;
	
	// entrada
	printf("Digite o numero: ");
	scanf("%lf",&n);
	
	fatorial(n,&r);
	
	// saída
	printf("O valor %.lf\n",r);
	
	return 0;
}

void fatorial(double n, double *r){
	*r=1;
	double i=1;
	while(i<=n){
		*r*=i;
		i++;
	}	
}