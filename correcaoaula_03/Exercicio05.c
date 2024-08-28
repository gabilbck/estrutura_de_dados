/*
5. Faça um programa para colocar três números em ordem crescente. Deve ter 
uma função para fazer a troca dos valores, use uma função usando passagem 
de parâmetro por referência. 
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 3

void ordena(int *n);
void troca(int *a, int *b);

int main(void){
	// variáveis
	int numeros[TAM];
	
	for(int i=0;i<TAM;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%i",&numeros[i]);
	}
	
	ordena(numeros);
	
	for(int i=0;i<TAM;i++){
		printf("%i, ",numeros[i]);
	}

	return 0;
}

void ordena(int *n){
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			if(n[i]<n[j]){
				troca(&n[i],&n[j]);
			}
		}
	}
}

void troca(int *a, int *b){
	int aux = *a;
	*a=*b;
	*b=aux;
}