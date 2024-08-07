/*
11) Crie um programa que incremente uma variável inteira iniciando em 0 e 
terminando em 50, mostrando os valores múltiplos de 8, o número da 
ocorrência em cada exibição e quantas vezes o múltiplo ocorreu.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int mo = 0, oco = 0;
    for(int i=0; i<=50; i++){
        if(i%8==0){
            printf("%i\n", i);
            oco = i;
            printf("Num da ocorrencia: %i\n\n",oco);
            mo++;
        }
    }
    printf("Quantidade de multiplos: %i",mo);
    return 0;
}