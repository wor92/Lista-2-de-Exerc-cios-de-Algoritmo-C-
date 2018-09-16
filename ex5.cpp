#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float nota1, nota2, m;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite segunda nota: ");
	scanf("%f", &nota2);
	
	m = (nota1 + nota2)/2;
	
	if(m == 10){
		printf("Aprovado com Distinção");
	}else if(m >= 7 && m < 10){
		printf("Aprovado ");
		
	}else{
		printf("Reprovado ");
	}
		
	
}
