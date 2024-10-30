/*
3. Construa um programa que define uma estrutura de peça, 
que poderá ser usado para outros programas, deverá conter 
atributos como: código, nome, cor, peso, preço. Também 
uma função entrada de dados e uma função de saídas de dados. 
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct peca{
	int cod;
	char nome[20], cor[20];
	float peso, preco;
}Peca;

Peca entrada(int index);
void impressao(Peca a);

int main(void){
    int qnt = 0;
	
	do{
	    printf("Quantas pecas ira registrar?\n");
	    scanf("%i", &qnt);
	    if(qnt<=0){
	        printf("A quantidade de registros não pode ser menor que zero!\n")
	    }
	}while(qnt<=0);
	
	Peca bd[qnt];
	
	for(int i=1; i<=qnt; i++){
	    printf("\nDigite dados da peca %i!\n\n", qnt);
	    bd[i]=entrada(i);
	    system("cls");
	}
	
	for(int i=1; i<=qnt; i++){
	    impressao(bd[i]);
	}
	
	return 0;
}

Peca entrada(int index){
    Peca a;
    a.cod=index;
    printf("Nome da peca: ");
    scanf("%s", &a.nome[20]);
    fflush(stdin);
    printf("Cor da peca: ");
    scanf("%s", &a.cor[20]);
    fflush(stdin);
    printf("Peso da peca: ");
    scanf("%f", &a.peso);
    fflush(stdin);
    printf("Preco da peca: ");
    scanf("%f", &a.preco);
    fflush(stdin);
    return a;
}

void impressao(Peca a){
    printf("%i %s %s %.3f %.2f\n", a.cod,a.nome,a.cor,a.peso,a.preco);
}