#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void permuta(int num1, int num2);
void main(){
	
	int n1, n2;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite um numero: ");
	scanf("%d", &n2);	
	printf("numero antes da troca: %d e %d\n ", n1, n2);
	permuta (n1,n2);
	printf("numero apos da troca: %d e %d\n ", n1, n2);
}

void permuta (int num1, int num2)

	{
		int aux;
		aux = num1;
		num1 = num2;
		num2 = aux;
	}
