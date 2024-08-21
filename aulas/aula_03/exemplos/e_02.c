#include <stdio.h>
#include <stdlib.h>

void somaVetor(int *n);

int main(void){
	int numeros[10];

	for(int i=0;i<10;i++){
		numeros[i]=i+1;
	}
	
	somaVetor(numeros);
	
	for(int i=0;i<10;i++){
		printf("%i, ",numeros[i]);
	}
	printf("\nNumero= %p\n",numeros);
	
	return 0;
}

void somaVetor(int *n){
	n[5]+=10;
}