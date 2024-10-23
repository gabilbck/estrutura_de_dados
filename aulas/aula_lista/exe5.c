/*
Construa um algoritmo que contenha uma lista dinâmica homogênea para guardar
números digitados pelo usuário, solicite ao usuário a quantidade de número
e os números e depois os imprima em tela. 
*/

/* lista dinamica homogenia */
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int n;
	struct lista *p;
}LISTA;

int main(void){
	// variáveis
	LISTA *l = NULL;
	int numero=0, qnt=0;
	
	printf("Quantidade de numros: ");
	scanf("%i",&qnt);
	
	for(int i=1;i<=qnt;i++){
		LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
		printf("Digite %i numero: ",i);
		scanf("%i",&numero);
		if(numero != -1){
			novo->n=numero;
			novo->p=l;
			l=novo;
		}else{
			break;
		}
	}
	
	while (l != NULL) {
        printf("%i\n", l->n);  //imprimir o valor 'n' do nó
        l = l->p;
    }
	return 0;
}