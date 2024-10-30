/*

3) Uma folha de pagamento simplificada contém os itens: Nome do Funcionário, 
Salário e Taxa de Desconto de INSS. Criar um programa que considere uma 
taxa de desconto de 8% e mostre no vídeo:

a) Nome do Funcionário.
b) Salário bruto
c) Valor do INSS
d) Salário líquido.
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
    return sb * 0.08;
}

void folha(float sb, float des, float sl, const char* nm) {
    printf("Nome:            %s\n", nm);
    printf("Salario bruto:   %.2f\n", sb);
    printf("Desconto:        %.2f\n", des);
    printf("Salario Liquido: %.2f\n", sl);
}