/*
8) Escrever um programa que mostre no vídeo a tabuada do 2, do 3 e do 5.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    for(int i=0; i<=10; i++){
    	printf("2 x %i\n", 2*i);
    }
    printf("\n\n");
    for(int i=0; i<=10; i++){
    	printf("3 x %i\n", 3*i);
    }
    printf("\n\n");
    for(int i=0; i<=10; i++){
    	printf("5 x %i\n", 5*i);
    }
    printf("\n\n");
    return 0;
}