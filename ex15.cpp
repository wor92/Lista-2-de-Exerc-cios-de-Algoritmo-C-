#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>


float a,b,c,maior;

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Informe a medida do lado A: ");
	scanf("%f",&a);
	printf("Informe a medida do lado B: ");
	scanf("%f",&b);
	printf("Informe a medida do lado C: ");
	scanf("%f",&c);
	
	if(a > b && a > c){
		maior = a;
	}else if(b > a && b > c){
		maior = b;
	}else if(c > a && c > b){
		maior = c;
	}
	if(maior == a){
		if(b+c > a){
			if(a == b && a == c && c == b){
				printf("Tri�ngulo Equil�tero...");
			}else if(a == b && b != c || b == c && a != c || a == c && a != b){
				printf("Tri�ngulo Is�sceles...");
			}else{
				printf("Tri�ngulo Escaleno...");
			}
		}else{
			printf("N�o � tri�ngulo");
		}
	}else if(maior == b){
		if(a+c > b){
			if(a == b && a == c && c == b){
				printf("Tri�ngulo Equil�tero...");
			}else if(a == b && b != c || b == c && a != c || a == c && a != b){
				printf("Tri�ngulo Is�sceles...");
			}else{
				printf("Tri�ngulo Escaleno...");
			}	
		}else{
			printf("N�o � tri�ngulo");
		}
	}else{
		if(a+b > c){
			if(a == b && a == c && c == b){
				printf("Tri�ngulo Equil�tero...");
			}else if(a == b && b != c || b == c && a != c || a == c && a != b){
				printf("Tri�ngulo Is�sceles...");
			}else{
				printf("Tri�ngulo Escaleno...");
			}
		}else{
			printf("N�o � tri�ngulo");
		}
	}
}
