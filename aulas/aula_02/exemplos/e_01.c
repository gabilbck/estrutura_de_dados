#include <stdio.h>
#include <stdlib.h>

// dado estruturado
typedef struct ponto{
	int x,y;
}Ponto;

// prototipo de função
Ponto entrada(void);
void impressao(Ponto a);

int main(void){
	// variáveis
	Ponto bd[5];
	
	// entrada de dados
	for(int i=0;i<5;i++){
		printf("Digite dados do ponto %i\n\n",i+1);
		bd[i]=entrada();
		system("cls");
	}
	
	// saída de dadps
	for(int i=0;i<5;i++){
		impressao(bd[i]);
	}
	
	return 0;
}

// funções
Ponto entrada(void){
	Ponto a;
	printf("Digite o valor de x: ");
	scanf("%i",&a.x);
	printf("Digite o valor de y: ");
	scanf("%i",&a.y);
	return a;
}

void impressao(Ponto a){
	printf("x=%i\ty=%i\n",a.x,a.y);
}
