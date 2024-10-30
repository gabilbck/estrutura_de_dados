/*
2. Construa um programa que define um tipo novo de dados, para
uma estrutura de um animal, deverá conter atributos como: raça,
cor, peso e sexo. E solicite ao usuário do programa 10 espécies e depois imprima em tela.  
*/
#include <stdio.h>
#include <stdlib.h>

// dado estruturado
typedef struct animal{
	char raca[20], cor[20], sexo;
	float peso;
}Animal;

// prototipo de função
Animal entrada(void);
void impressao(Animal a);

int main(void){
	// variáveis
	Animal bd[10];
	
	// entrada de dados
	for(int i=0;i<10;i++){
		printf("Digite dados do Animal %i\n\n",i+1);
		bd[i]=entrada();
		system("cls");
	}
	
	// saída de dadps
	for(int i=0;i<10;i++){
		impressao(bd[i]);
	}
	
	return 0;
}

// funções
Animal entrada(void){
	Animal a;
	printf("Digite a raca: ");
	gets(a.raca);
	printf("Digite a cor: ");
	gets(a.cor);
	printf("Digite o peso: ");
	scanf("%f",&a.peso);
	fflush(stdin);
	printf("Digite o sexo (f/m): ");
	scanf("%c",&a.sexo);
	fflush(stdin);
	return a;
}

void impressao(Animal a){
	printf("\n%s\n%s\n%f\n%c\n",a.raca,a.cor,a.peso,a.sexo);
}