/*
Construa um algoritmo que contenha uma lista dinâmica heterogênea onde o usuário deverá 
informar quantidade de disciplinas que ele tem e os dados de cada disciplina como: 
sala, dia da semana, nome disciplina e semestre e depois o algoritmo deve imprimir 
estes dados em tela. 
*/

/* lista dinamica heterogenia */
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int sala;
    char diasem[15];
    char disciplina[50];
    int semestre;
	struct lista *p;
}LISTA;

int main(void){
	LISTA *l = NULL;
	int qnt_d = 0;
	
	printf("Qunatidade de disciplinas: ");
	scanf("%i",&qnt_d);
	
	for(int i=1;i<=qnt_d;i++){
		LISTA *novo=(LISTA*) malloc(sizeof(LISTA));
		printf("%i Digite numero sala: ",i);
		scanf("%i",&novo->sala);
        printf("%i Digite dia da semana: ",i);
		scanf("%s",novo->diasem);
		fflush(stdin);
		printf("%i Digite nome disciplina: ",i);
		scanf("%s",novo->disciplina);
		fflush(stdin);
		printf("%i Digite semestre: ",i);
		scanf("%i",&novo->semestre);
		novo->p=l;
		l=novo;
	}
	
	while(l!=NULL){
		printf("%i, %s, %s, %i\n",l->sala,l->diasem,l->disciplina,l->semestre);
		l=l->p;
	}
	
	return 0;
}