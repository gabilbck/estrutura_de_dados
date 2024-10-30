/*
2. Construa um programa que define um tipo novo de dados, para uma estrutura de
 um animal, deverá conter atributos como: raça, cor, peso e sexo.  E solicite 
 ao usuário do programa 10 espécies e depois imprima em tela. 
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

typedef struct animal{
	char raca[30], cor[30], sexo;
	float peso;
}Animal;

int main(void){
	// variáveis
	Animal a[TAM];
	
	// entrada
	for(int i=0;i< TAM;i++){
		printf("Digite raca: ");
		gets(a[i].raca);
		fflush(stdin);
		printf("Digite a cor: ");
		gets(a[i].cor);
		fflush(stdin);
		printf("Digite o sexo f/m: ");
		scanf("%c",&a[i].sexo);
		fflush(stdin);
		printf("Digite o peso: ");
		scanf("%f",&a[i].peso);
		fflush(stdin);
	}
	
	// saída
	printf("\nRACA\tCOR\tSEXO\tPESO\n");
	for(int i=0;i<TAM;i++){
		printf("%s\t%s\t%c\t%f\n",a[i].raca, a[i].cor, a[i].sexo, a[i].peso);
	}
	
	
	return 0;
}
