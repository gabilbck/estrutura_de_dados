// Uso de ponteiro 
#include <stdio.h>
#include <stdlib.h>


int main(void){
	int numero1 = 3;
	int *numero2;
	numero2 = &numero1;
	
	printf("numero1 - end.: %p, con.: %i\n",&numero1,numero1);
	printf("numero2 - end.: %p, con.: %i\n",numero2,*numero2);
	*numero2 = 5;
	printf("numero1 - end.: %p, con.: %i\n",&numero1,numero1);
	printf("numero2 - end.: %p, con.: %i\n",numero2,*numero2);
	int numero3;
	numero2 = &numero3;
	printf("numero1 - end.: %p, con.: %i\n",&numero1,numero1);
	printf("numero2 - end.: %p, con.: %i\n",numero2,*numero2);
	printf("numero3 - end.: %p, con.: %i\n",&numero3,numero3);
	numero1=7;
	numero3=1;
	printf("numero1 - end.: %p, con.: %i\n",&numero1,numero1);
	printf("numero2 - end.: %p, con.: %i\n",numero2,*numero2);
	printf("numero3 - end.: %p, con.: %i\n",&numero3,numero3);
	
	return 0;
}