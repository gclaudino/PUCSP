#include <stdio.h>
#define MAXVALOR 10

typedef enum _diaDaSemana {dom = 1, seg, ter, qua, qui, sex}diaDaSemana;


int main(){
	
	int x;
	diaDaSemana dia = sex;
	
	
	if (dia == qui){
		printf("\nIgual!!!");
		}else{
			printf("\nNao Igual !!!");
		}
	
	
	
	
	printf("\nValor = %d", dia);
	
	return 0;
}
