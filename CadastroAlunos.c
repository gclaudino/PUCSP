#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tipos.h"
#include <strings.h>


int main(){
	struct _data ze;
	struct _data vetDatas[20];
	data d;
	int k, i;
	aluno a[k];
	float totalNotas = 0;
	float mediaTurma;
	float maiorNota = 0, menorNota = 0;

	printf("\n\n\n\n\n\n\n\t\t\t CADASTRO DE ALUNOS");
	printf("\n\t      pressione qualquer tecla para continuar...");
	getch();
	system("cls");
	

	printf("Insira o Numero de alunos: ");
	scanf("%d", &k);
	getchar();



	for( i = 0; i < k; i++){
	printf("\nDigite seu nome Completo: ");
	gets(a[i].nome);
	fflush(stdin);
	printf("Insira seu RA: ");
	gets(a[i].ra);
	fflush(stdin);
	printf("Digite sua media final em LP2: ");
	scanf("%f", &a[i].nota);
	printf("Insira o Dia do seu nascimnto: ");
	scanf("%d", &a[i].dataDeNasc.dia);
	fflush(stdin);
	printf("Digite o numero referente ao mes do seu nascimento: ");
	scanf("%d", &a[i].dataDeNasc.mes);
	fflush(stdin);
	printf("Insira o ano do seu nascimento: ");
	scanf("%d", &a[i].dataDeNasc.ano);
	fflush(stdin);
	printf("\npressione qualquer tecla para continuar...");
	getch();
	system("cls");


}
	for(i=0; i < k; i++){

	printf("\nNome: %s \nRA: %s", a[i].nome, a[i].ra);
	printf("\nNota Final: %.2f", a[i].nota);
	printf("\nData de nascimento %d/%d/%d\n\n", a[i].dataDeNasc.dia, a[i].dataDeNasc.mes, a[i].dataDeNasc.ano);
	

}
	for(i = 0; i < k; i++){
	totalNotas = totalNotas + a[i].nota;

	}
	mediaTurma = totalNotas/k;
	printf("Media total da Turma: %.2f ", mediaTurma);


/*
	for (i = 0; i < k; i++){
    if(maiorNota==0) maiorNota = a[i].nota;
    if(menorNota==0) menorNota = a[i].nota;

    if(maiorNota<a[i].nota) maiorNota = a[i].nota;
    if(menorNota>a[i].nota) menorNota = a[i].nota;

    }
    }

    printf("\n\n Maior: %d\n", maiorNota);
    printf(" Menor: %d", menorNota);
*/
}
