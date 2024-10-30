/*
Construa um algoritmo que contenha uma lista estática heterogênea para guardar dados 
cadastrais de dez softwares, solicite ao usuário digitar, nome, fabricante,
tipo de licença e versão. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    char fabricante[50];
    char licenca[20];
    int versao;
} Lista;

int main(void){
    Lista l[10];
    
    for(int i = 0; i < 10; i++){
        printf("%i - Nome do Software: ", i + 1);
        scanf("%49s", l[i].nome);  // %(numero)s pra nao estourar estourar
        fflush(stdin);
        
        printf("%i - Fabricante: ", i + 1);
        scanf("%49s", l[i].fabricante); // String já endereço de memoria, por isso, sem o &
        fflush(stdin);
        
        printf("%i - Licença: ", i + 1);
        scanf("%19s", l[i].licenca);  
        fflush(stdin);

        printf("%i - Versão: ", i + 1);
        scanf("%i", &l[i].versao);
    }
    
    printf("\nDados cadastrados:\n");
    for(int i = 0; i < 10; i++){
        printf("Software %i: %s, %s, %s, %i\n", i + 1, l[i].nome, l[i].fabricante, l[i].licenca, l[i].versao);
    }
    
    return 0;
}
