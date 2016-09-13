#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    
	srand((unsigned)time(NULL));
    int a,b;
    int sinal;
    int chute;
    int erro=0,acerto=0;
    int d=2;
    int c,e,m,n;
	do {
	
	a = rand() % 10;
	b = rand() % 10;
	sinal = rand()% 4;
	switch (sinal){
	case 0:
		
		printf("\t\t\t***JOGO DAS OPERACOES***"); 
	    printf("\n%d + %d = ",a,b );
	    scanf("%d", &chute);
	    c = a+b;
	    if(chute == c){
	    acerto++;
	    printf("\nACERTO: %d", acerto);
	    }else{
	   	erro++;
	   	printf("\nERRO: %d", erro);}
	   	printf("\nDESEJA CONTINUAR ? SIM -- 1 __ NAO -- 0: ");
	   	scanf("%d", &d);
		system("cls");
	   break;
	case 1:
		printf("\t\t\t***JOGO DAS OPERACOES***");
		if (a<b) {
		break;
		}
		printf("\n%d - %d = ",a,b );
	    scanf("%d", &chute);
	    e = a-b;
	    if(chute == e){
	    acerto++;
	    printf("\nACERTO: %d", acerto);
	    }else{
	   	erro++;
	   	printf("\nERRO: %d", erro);}
	   	printf("\nDESEJA CONTINUAR ? SIM -- 1 __ NAO -- 0: ");
	   	scanf("%d", &d);
	   	system("cls");
	   break;
	case 2:
		printf("\t\t\t***JOGO DAS OPERACOES***");
		printf("\n%d * %d = ",a,b );
		scanf("%d", &chute);
	    m = a*b;
	    if(chute == m){
	    acerto++;
	    printf("\nACERTO: %d", acerto);
	    }else{
	   	erro++;
	   	printf("\nERRO: %d", erro);}
	   	printf("\nDESEJA CONTINUAR ? SIM -- 1 __ NAO -- 0: ");
	   	scanf("%d", &d);
	   	system("cls");
		break;
		
	case 3:
		printf("\t\t\t***JOGO DAS OPERACOES***");
        if (a%b!=0){
			break;
		}
		if (b==0){
		   break;
		}	    
	    printf("\n%d / %d = ",a,b );
		scanf("%d", &chute);
	    n = a/b;
	    if(chute == n){
	    acerto++;
	    printf("\nACERTO: %d", acerto);
	    }else{
	   	erro++;
	   	printf("\nERRO: %d", erro);}
	   	printf("\nDESEJA CONTINUAR ? SIM -- 1 __ NAO -- 0: ");
	   	scanf("%d", &d);
	   	system("cls");
	   	
	break;
	    
	    
	}
	
	
		
	}while (d!=0);
	
	printf("\n\tACERTOS: %d\n\tERROS: %d", acerto,erro);
	if(acerto<=erro){
		printf("\n\tPRATIQUE UM POUCO MAIS !!!");
	}else{
		printf("\n\n\tPARABENS !!! \n\tVOCE ESTA NO CAMINHO CERTO !!!");
	}
	
}








