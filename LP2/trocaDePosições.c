#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void permuta(int *num1, int *num2);
void main(){
	
	int a, b, c;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite um numero: ");
	scanf("%d", &b);	
	printf("Digite um numero: ");
	scanf("%d", &c);	

	if(b<a){
		permuta(&a, &b);
	}
	if(c<b){
		permuta(&b, &c);
			if(b<a){
			permuta(&a, &b);
		}
	}

	printf("\nOs numeros depois da troca sao: %d, %d, %d\n", a, b, c);


}

void permuta (int *num1, int *num2)

	{
		int aux;
		aux = *num1;
		*num1 = *num2;
		*num2 = aux;
	}
