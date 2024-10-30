/*
1. Construa um programa que define uma estrutura de tipo pessoa,
depois, solicite inserção de dados para a estrutura de tipo 
pessoa e agora imprime a estrutura tipo pessoa. 
*/
#include <stdio.h>
#include <stdlib.h>

// dado estruturado
typedef struct pessoa{
	char nome[30], sexo;
	int idade;
	float altura;
}Pessoa;

// prototipo de função
Pessoa entrada(void);
void impressao(Pessoa a);

int main(void){
	// variáveis
	Pessoa p;
	
	// entrada de dados
	p = entrada();
	
	// saída de dadps
	impressao(p);
	
	return 0;
}

// funções
Pessoa entrada(void){
	Pessoa a;
	printf("Digite o nome: ");
	gets(a.nome);
	printf("Digite o sexo (f/m): ");
	scanf("%c",&a.sexo);
	printf("Digite a idade: ");
	scanf("%i",&a.idade);
	printf("Digite a altura: ");
	scanf("%i",&a.altura);
	return a;
}

void impressao(Pessoa a){
	printf("%s\n%c\n%i\n%f\n",a.nome,a.sexo,a.idade,a.altura);
}