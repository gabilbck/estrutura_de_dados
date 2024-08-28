/*
6. Faça uma função que receba como parâmetros por referência a linha, a coluna e 
uma mensagem, esta função deve imprimir na tela a mensagem na posição solicitada.
*/
#include <stdio.h>
#include <stdlib.h>

void escreva(int *l, int *c, char *m);

int main(void){
	int linha=10, coluna =20;
	char messagem[]="Boa noite!";
	
	escreva(&linha,&coluna,messagem);
	
	return 0;
}

void escreva(int *l, int *c, char *m){
	for(int i=1;i<=*l;i++){
		printf("\n");
	}
	for(int i=1;i<=*c;i++){
		printf(" ");
	}
	printf("%s",m);
}