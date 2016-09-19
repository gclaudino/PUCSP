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
    int diaFinal, mesFinal, anoFinal, aux, dAno;
    int dia, mes , ano, diastotais, diaVida;
    
    printf("Digite a data do seu nascimento na forma XX/XX/XXXX:\n");
    scanf("%d/%d/%d",&dia,&mes,&ano);
    
    printf("Digite a data do dia atua na forma XX/XX/XXXX: \n");
    scanf("%d/%d/%d",&diaFinal,&mesFinal,&anoFinal);
    
   
    
    diastotais = somadordiames(ano, mes);
    diastotais -= dia;
    
    
    
    aux = ano; 
    
    while(aux != anoFinal){
    	
    	bissexto(aux);
    	if(dAno == 365){
    		diaVida = diaVida + 365;
		}else{
			diaVida = diaVida + 366;
		}
    	aux++;
	}
    
    diastotais = somadordiames(anoFinal, mesFinal);
    diastotais -= diaFinal;
    printf("%d",diastotais);
    
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

