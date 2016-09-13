#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tipos.h"	


int main(){
	struct _data ze;
	struct _data vetDatas[20];
	data d;
	
	strcpy(vetDatas[4].diaDaSemana, "Domingo");
	vetDatas[4].mes = 12;
	
	
	
		
	ze.dia = 10;
	ze.mes = 9;
	ze.ano = 2016;
	strcpy(ze.diaDaSemana , "Segunda Feira");
	
	printf("\n%s", ze.diaDaSemana);
	printf("\n%d", ze.dia);
	printf("\n%d", ze.mes);
	printf("\n%d", ze.ano);
	
	
	aluno a;
	printf("\n\nDigite o nome: ");
	scanf(a.nome); // ou gets(a.nome);
	
	printf("Insira o Dia: ");
	scanf("%d", &a.dataDeNasc.dia);
	
	printf("Digite o mes: ");
	scanf("%d", &a.dataDeNasc.mes);
	
	printf("Insira o ano: ");
	scanf("%d", &a.dataDeNasc.ano);
	
	
	printf("\nNome: %s", a.nome);
	printf("\nDia: %d", a.dataDeNasc.dia);
	printf("\nMes: %d", a.dataDeNasc.mes);
	printf("\nAno: %d", a.dataDeNasc.ano);
	
	
	
	
}
