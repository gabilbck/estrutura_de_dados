/*
Construa um algoritmo que contenha uma lista estática homogênea para guardar seis números reais, 
solicite ao usuário os números e apresente para ele a média dos números. 
*/

#include <stdlib.h>
#include <stdio.h>

int main(void){
    float lista[6], total;
    
    for(int i=0; i<6; i++){
        printf("Digite o %iº número: ", i+1);
        scanf("%f", &lista[i]);
    }
    
    for(int i=0; i<6; i++){
        total+=lista[i];
        if(i==5){
            printf("%f / 6 = %f",lista[i], total/6);
        } else{
            printf("%f + ", lista[i]);
        }
    }
    return 0;
}