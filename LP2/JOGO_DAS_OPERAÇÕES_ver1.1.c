#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(){
    
	srand((unsigned)time(NULL));
    int a,b;
    int sinal;
    int chute;
    int erro=0,acerto=0;
    int d=2;
    int c,e,m,n;
    int nivel;
    float chutedec;
    printf("\n\t*****JOGO DAS OPERACOES*****\n");
    printf("\n\tLEIA O QUE SERA COBRADO EM CADA NIVEL:\n\n");
	printf("\n\tNIVEL 1: NUMEROS POSITIVOS\n\tINTERVALO DE 0-9 \n\tSUBTRACAO, ADICAO, DIVISAO, MULTIPLICACAO\n");
	printf("\n\tNIVEL 2: NUMEROS RACIONAIS\n\tINTERVALO DE 0-20 \n\tSUBTRACAO, ADICAO, DIVISAO, MULTIPLICACAO\n");
	printf("\n\tNIVEL 3: NUMEROS RACIONAIS\n\tINTERVALO DE 0-50 \n\tSUBTRACAO, ADICAO, DIVISAO, MULTIPLICACAO\n\n");
	printf("\n\tENTER PARA CONTINUAR E ESCOLHER O NIVEL");
	getchar ();
	system("cls");
	printf("\n\tDIGITE O NUMERO DO NIVEL ESCOLHIDO: ");
	scanf("%d", &nivel);
	system("cls");
	
	
	if(nivel==1){
	
		do {
		a = rand() % 10;
		b = rand() % 10;
		sinal = rand()% 4;
		switch (sinal){
		case 0:
			
			
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
		
		}else if(nivel==2){
			do {
			a = rand() % 20;
			b = rand() % 20;
			sinal = rand() % 4;
			switch (sinal){
			case 0:
				
				
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
				if (b==0){
				   break;
				}	    
			    printf("\n%d / %d = ",a,b );
				scanf("%f", &chutedec);
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
			
				}else{
					
					do {
				a = rand() % 20;
				b = rand() % 20;
				sinal = rand() % 4;
				switch (sinal){
				case 0:
					
					
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
					if (b==0){
					   break;
					}	    
				    printf("\n%d / %d = ",a,b );
					scanf("%f", &chutedec);
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
			}
			printf("\n\tACERTOS: %d\n\tERROS: %d", acerto,erro);
			if(acerto<=erro){
				printf("\n\tPRATIQUE UM POUCO MAIS !!!");
			}else{
				printf("\n\n\tPARABENS !!! \n\tVOCE ESTA NO CAMINHO CERTO !!!");
			}
		}
	
	










