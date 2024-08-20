/*
1. Construa um programa que define uma estrutura de tipo pessoa, depois, 
solicite inserção de dados para a estrutura de tipo pessoa e agora imprime a 
estrutura tipo pessoa.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
	char nome[30], sexo;
	int idade;
	float altura;
}Pessoa;

int main(void){
	// variáveis
	Pessoa a;
	
	// entrada
	printf("Digite o nome: ");
	gets(a.nome);
	fflush(stdin);
	printf("Digite o sexo (m/f): ");
	scanf("%c",&a.sexo);
	fflush(stdin);
	printf("Digite a idade: ");
	scanf("%i",&a.idade);
	printf("Digite a altura: ");
	scanf("%f",&a.altura);
	
	// saída
	printf("Nome: \t%s\n",a.nome);
	printf("Sexo: \t%c\n",a.sexo);
	printf("Idade: \t%i\n",a.idade);
	printf("Altura: \t%.2f\n",a.altura);
	
	return 0;
}
