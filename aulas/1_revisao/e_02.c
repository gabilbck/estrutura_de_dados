/*
2) Escrever um programa que declare duas variáveis inteiras e 
mostre no vídeo o valor das duas em seguida, a maior delas.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b;
    
    printf("Digite o primeiro numero\n");
    scanf("%i", &a);
    fflush(stdin);
    printf("Primeiro numero: %i\n\n", a);
    
    printf("Digite o segundo numero\n");
    scanf("%i", &b);
    fflush(stdin);
    printf("Segundo numero: %i\n\n", b);
    
    if(a>b){
        printf("%i e maior\n", a);
    }
    if (b>a){
        printf("%i e maior\n", b);
    }
    return 0;
}