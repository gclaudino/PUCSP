//
//
//  Developer Gabriel Claudino Rabelo Silva 
//  14/09/16.
//

#include <stdio.h>
#include <stdlib.h>

int diaMes(int, int);
int somadordiames(int, int);
int bissexto (int a);

int main() {
    int diaFinal, mesFinal, anoFinal, aux, anoAux, dAno;
    int dia, mes , ano, diastotais, diasTotaisFinal, diaVida;
    
    do{
    printf("Digite a dia do seu nascimento na forma XX:\n");
    scanf("%d",&dia);
	}while(dia < 0 || dia >= 31);
	do{
	printf("Digite a mes do seu nascimento na forma XX:\n");
    scanf("%d",&mes);
    }while(mes<0||mes>13);
	do{
	printf("Digite a ano do seu nascimento na forma XXXX:\n");
	scanf("%d",&ano);
    }while(ano<1000 || ano > 9999);
    do{
    printf("Digite o dia atual na forma XX:\n");
    scanf("%d",&diaFinal);
	}while(diaFinal < 0 || diaFinal >= 31);
	do{
	printf("Digite o mes atual na forma XX:\n");
    scanf("%d",&mesFinal);
    }while(mesFinal<0||mesFinal>13);
	do{
	printf("Digite o ano atual na forma XXXX:\n");
	scanf("%d",&anoFinal);
    }while(anoFinal<1000 || anoFinal >= 9999);
    
   
   
    
    diastotais = somadordiames(ano, mes);
    diastotais -= dia;
    printf("%d", diastotais);
    
    
    aux = ano; 
    
    while(aux != ano){
    	
    	diaVida = diaVida + bissexto(aux);
    	aux++;
	}
    
    diasTotaisFinal= somadordiames(anoFinal, mesFinal);
    diasTotaisFinal -= diaFinal;
    printf("\n%d",diasTotaisFinal);
    printf("\n%d",diaVida);
    diaVida = diaVida - diastotais;
    
    printf("\n%d", aux);
    printf("\n%d", diaVida);
    
}

int diaMes(int m, int a){
    int tdias;
    switch (m) {
        case 2:
            if ((a%4==0 && a%100 !=0)||(a%100==0)) {
                tdias=29;
            }else tdias =28; break;
            
        case 4 : case 6 : case 9 : case 11:
            tdias=30; break;
            break;
            
        default : tdias=31;
            break;
    }
    return tdias;
}
int somadordiames (int a, int m){
    int mes;
    int contdis =0;
    for (mes=m; mes<=12;mes++ ) {
        contdis+= diaMes(mes, a);
        //rintf("cotdis = %d\n", contdis);
        
        
    }
    return contdis;

}



int bissexto (int a){
	int dAno; 
	if  (a % 4 == 0 && (a % 400 == 0  || a % 100 != 0)) {
	dAno = 366;

	}else{
		dAno = 365;
		
	}
	return dAno;
}

