#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 3
#define FIM -1
#define temp 10

typedef struct _ALUNO{
	char nome[50];
	float nota1, nota2, notaFinalMomentanea;
	float at1, p1;
	char materia[15];
	char status[3];
}aluno; 



void dadosAluno(aluno alunos[], int *n){										//função armzena as notas e materia desejada
	*n = 0;	
	int sair;
	do{
		printf("\nInsira a disciplina desejada: "); gets(alunos[*n].materia);
		fflush(stdin);															
	//	printf("\nInsira o seu Nome e Sobrenome: "); gets(alunos[*n].nome);
	//	fflush(stdin);
		printf("Insira sua nota na ATIVIDADE 1: "); scanf("%f", &alunos[*n].at1);
		printf("Insira sua nota na PROVA 1: "); scanf("%f", &alunos[*n].p1);
		system("cls");
		fflush(stdin);
		*n = *n+1;
		printf("Para encerrar digite '-1' no campo ESCOLHA\nPara continuar digite '99' no campo ESCOLHA\n"); 
		printf("SAIR: ");
		scanf("%d",&sair);
		fflush(stdin);
		
			
	}while (sair != FIM);
	
	if (sair == FIM){
		*n-=1;
	}
	
}

void calculoFinal (aluno alunos[], int n){			//faz os calculos e imprime os resultados de cada caso
	int i;
	int pesoAT1, pesoP1;
	float aux;
	
	
	for ( i = 0; i<= n; i++){
	printf("\nInsira o seu Nome e Sobrenome: "); gets(alunos[i].nome);//recebe o nome e sobrenome do aluno
	fflush(stdin);

	printf("\nInsira o criterio usado por seu professor para o calculo da N1 de %s", alunos[i].materia); //recebe os criterios usados para o calculo da n1
	printf("\nPeso na AT1: "); scanf("%d", &pesoAT1);
	printf("\nPeso na P1: "); scanf("%d", &pesoP1);
	
	
	alunos[i].nota1 = ((pesoAT1 * alunos[i].at1) + (pesoP1 * alunos[i].p1))/(pesoAT1 + pesoP1);
	
	alunos[i].notaFinalMomentanea = alunos[i].nota1/2;
	
	if ( alunos[i].notaFinalMomentanea < 5){
		aux = temp - alunos[i].nota1;
		printf("\nDisciplina: %s", alunos[i].materia);
		printf("\nNome: %s", alunos[i].nome);
		printf("\nNota final parcial: %.2f", alunos[i].notaFinalMomentanea );
		printf("\nPara passar nessa diciplina sua N2 tem que ser >= %.2f" , aux);
	}else{
		printf("\nDisciplina: %s", alunos[i].materia);
		printf("\nNome: %s", alunos[i].nome);
		printf("\nNota final parcial: %.2f", alunos[i].notaFinalMomentanea );
		printf("\nPARABENS !! VOCE ESTA APROVADO EM %s", alunos[i].materia );
	}
	

	printf("\n");
}
}

int main(){
	int aux[max];
	int n;
	dadosAluno(aux, &n);	
	calculoFinal(aux, n);
	
	
}
