/*
6) Considerando o problema anterior, criar um novo programa que incremente uma 
variável com a mesma faixa de valores, 
e mostre no vídeo somente os números pares ou múltiplos de 6.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    for(int i=0; i<=100; i++){
        if((i%2=0)||(i%6=0)){
            printf("%i\n", i);
        }
    }
    return 0;
}