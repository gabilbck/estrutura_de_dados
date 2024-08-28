/*
8. Faça uma função que leia um texto e converta este texto para maiúscula. 
O texto deve ser passado para função por referência.  
*/
#include <stdio.h>
#include <stdlib.h>

void converta(char *m);

int main(void){
	char texto[50];
	
	printf("Digite o texto: ");
	gets(texto);
	
	converta(texto);
	
	printf("%s\n",texto);
	
	return 0;
}

void converta(char *m){
	int i=0;
	while(m[i]!='\0'){
		if(m[i]>='a' && m[i]<='z'){
			m[i]-=32;
		}
		i++;
	}
}