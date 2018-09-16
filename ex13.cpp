#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int number;


int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Insira um número correpondente aos dias da semana:\n");
	printf("Ex: 2 para selecionar Segunda-feira...   :");
	scanf("%d", &number);
	
	if(number == 1){
		printf("Voce selecionou Domingo");
		
	}else if(number == 2){
		printf("Voce selecionou Segunda-Feira");
		
	}else if(number == 3){
		printf("Voce selecionou Terça-Feira");
		
	}else if(number == 4){
		printf("Voce selecionou Quarta-Feira");
		
	}else if(number == 5){
		printf("Voce selecionou Quinta-Feira");
	
	
	}else if(number == 6){
		printf("Voce selecionou Sexta-Feira");
		
	}else if(number == 7){
		printf("Voce selecionou Sabádo");
	}else{
		printf("Numero invalido...");
	}
	
	
}
