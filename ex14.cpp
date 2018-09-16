#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float n1, n2, media;
char conceito;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite primeira nota: ");
	scanf("%f", &n1);
	printf("Digite segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1 + n2)/2;
	
	if(media >= 9  && media <= 10){
		conceito = 'A';
		
	}else if(media >= 7.5 && media < 9){
		conceito = 'B';
	}else if(media >= 6 && media < 7.5){
		conceito = 'C';
		
	}else if(media >= 4 && media < 6 ){
		conceito = 'D';
	}else if(media >= 0 && media < 4){
		conceito = 'E';
	}else{
		printf("Valor da média incorreto...\n");
	}
	
	if(conceito == 'A' || conceito == 'B' || conceito == 'C'){
		printf("Nota 1 = %.2f\nNota 2 = %.2f\n",n1,n2);
		printf("Média = %.2f\n",media);
		printf("Conceito = %c\n",conceito);
		printf("APROVADO! ");
	}else{
		printf("Nota 1 = %.2f\nNota 2 = %.2f\n",n1,n2);
		printf("Média = %.2f\n",media);
		printf("Conceito = %c\n",conceito);
		printf("REPROVADO! ");
	}
	
	
}
