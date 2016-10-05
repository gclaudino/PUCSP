#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void eqSegundoGrau (float a, float b, float c );
int main(){
	float a,b ,c;
	
	
	printf("\nInsira os valores de a, b, c, correspondentes a : ax²+ bx + c = 0");
	printf("\nax²: ");
	scanf("%f", &a);
	printf("\nbx: ");
	scanf("%f", &b);
	printf("\nc: ");
	scanf("%f", &c);
	eqSegundoGrau(a,b,c);

}
void eqSegundoGrau (float a, float b, float c ){
	float x1, x2, delta;

	delta = pow(b,2)- 4 * a * c;
	
	if(delta < 0 ){
		puts("EQUACAO NAO POSSUI SOLUCAO NO CONJUNTO DOS NUMEROS REAIS");
	}else{
		x1 = (-b+sqrt(delta))/2 * a;
		x2 = (-b-sqrt(delta))/2 * a;
		
		printf("\n\nAs raizes da equacao sao X1 = %.2f e X2 = %.2f", x1, x2);
	}
}
