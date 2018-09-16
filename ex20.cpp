#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float nota1, nota2, nota3, media;


int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite nota 1: ");
	scanf("%f", &nota1);
	printf("Digite nota 2: ");
	scanf("%f", &nota2);
	printf("Digite nota 3: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	if(media == 10){
		printf("Aprovado com Distinção");
		
	}else if(media >= 7 && media < 10){
		printf("Aprovado");
		
	}else{
		printf("Reprovado");
	}
	
}
