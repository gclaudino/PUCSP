#include <stdio.h>
#include <stdlib.h>


int main(){
	char nome[50];
	
    printf("Insira seu nome: ");
	//scanf("%s", nome);
	gets(nome);
	printf("\nOLA %s, Bem Vindo ao curso de LP2 !!!", nome);
    return 0;
}

