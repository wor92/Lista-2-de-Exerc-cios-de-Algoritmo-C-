#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int a, b, c, delta;
float x1, x2;


int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Calcular a equação do segundo grau. ax^2 + bx + c\n");
	printf("Informe o valor de (A): ");
	scanf("%d", &a);
	
	if(a == 0){
		printf("O valor de (A) não pode ser zero...");
		
	}else{
		printf("Informe o valor de (B): ");
		scanf("%d", &b);
		printf("Informe o valor de (C): ");
		scanf("%d", &c);
		delta = pow(b, 2) - (4 * a * c);
		
		if (delta < 0){
			printf("A eaqução não possui raizes reais, pois o delta é negativo. ");
			
		}else if (delta == 0){
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			printf("A equação posuui apena uma raiz real: X1 = %2.f e X2 = %2.f", x1, x2);
			
		}else{
			x1 =(-b + sqrt(delta))/(2*a);
			x2 =(-b - sqrt(delta))/(2*a);
			printf("A equação possui duas raizes reais. \n");
			printf("A raiz de X1 é %2.f\n", x1);
			printf("A raiz de X2 é %2.f\n", x2); 
		}
		
		
	}
	
}
