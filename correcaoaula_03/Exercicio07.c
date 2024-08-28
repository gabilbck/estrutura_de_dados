/*
7. Faça uma função que leia um nome, converta o primeiro caractere deste nome para
maiúscula. O nome deve ser passado para função por referência. 
*/
#include <stdio.h>
#include <stdlib.h>

void converta(char *m);

int main(void){
	char nome[30];
	
	printf("Digite o nome: ");
	gets(nome);
	
	converta(nome);
	
	printf("%s\n",nome);
	
	return 0;
}

void converta(char *m){
	if(m[0]>='a' && m[0]<='z'){
		m[0]-=32;
	}
}