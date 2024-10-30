/*

4) Baseando no item anterior, escreva um programa que define uma 
taxa de desconto de acordo com o seguinte critério:

a) Salário até R$ 1.000,00 – desconto de 8%
b) Salário entre R$ 1.000,01 e 1.500,00 – desconto de 8,5%
c) Salário acima de R$ 1.500,00 – desconto de 9%
d) O programa deve mostrar o salário em consideração e mostrar sua taxa de desconto, 
bem como o valor do desconto.

*/
#include <stdio.h>
#include <stdlib.h>

float iss(float sb);
void folha(float sb, float des, float sl, const char* nm);

int main() {
    float sb = 0, des = 0, sl = 0;

    printf("Seu salario bruto: ");
    scanf("%f", &sb);

    des = iss(sb);
    sl = sb - des;

    folha(sb, des, sl, "Nome");

    return 0;
}

float iss(float sb) {
    if(sb<=1000){
        return sb * 0.08;
    } else if((sb>=1000.01)&&(sb<=1500)){
        return sb * 0.085;
    } else if((sb>1500)){
        return sb * 0.09;
    } else{
        printf("Valor invalido!");
        return -1;
    }
    
}

void folha(float sb, float des, float sl, const char* nm) {
    printf("Nome:            %s\n", nm);
    printf("Salario bruto:   %.2f\n", sb);
    printf("Desconto:        %.2f\n", des);
    printf("Salario Liquido: %.2f\n", sl);
}