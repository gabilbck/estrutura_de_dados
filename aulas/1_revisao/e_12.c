/*
12) Escrever um programa que incremente uma variável iniciando em 0 e 
terminando em 200. A cada passagem pela variável, se o valor for par, 
este deverá ser acumulado em uma variável e, se for impar, acumulado em outra.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int par=0, impar=0;
    for(int i=0; i<=200; i++){
        if(i%2==0){
            par = par + i;
        } else{
        	impar = impar + i;
		}
    }
    printf("soma do par: %i\n", par);
    printf("soma do impar: %i\n", impar);
    return 0;
}