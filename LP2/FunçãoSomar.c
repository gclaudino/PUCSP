#include <stdio.h>
#include <stdlib.h>
#include "tipos.h"

int somar (int x, int y);
void mostrar(int ze);

int main(){
	int a, b;
	
	printf("\nInsira um Valor de 'A': ");
	scanf("%d", &a);
	printf("\nInsira o valor de 'B': ");
	scanf("%d", &b);
	
	int res = somar(a, b);
	mostrar(res);
	
	
	return 0;	
	
}

void mostrar (int ze){
	printf("\nResultado = %d", ze);
}
int somar (int x, int y){
	return (x+y);
}
