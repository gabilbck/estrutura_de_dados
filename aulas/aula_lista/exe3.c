/*
Construa um algoritmo que contenha uma lista estática homogênea para guardar seis números reais, 
solicite ao usuário os números e apresente para ele a média dos números. 
*/

#include <stdlib.h>
#include <stdio.h>

int main(void){
    float lista[6];  // Alterar o tipo para float ou double, dependendo da precisão desejada
    
    for(int i=0; i<6; i++){
        printf("Digite o %iº número: ", i+1);
        scanf("%f", &lista[i]);  // Alterar o formato de entrada para %f para float
    }
    
    for(int i=0; i<6; i++){
        printf("%.2f\n", lista[i]);  // Usar %.2f para exibir com 2 casas decimais (ou ajusta conforme necessário)
    }
    
    return 0;
}
