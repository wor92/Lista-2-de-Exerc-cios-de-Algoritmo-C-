#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

char turno;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Qual turno voce estuda?\n");
	printf("Digite M para Matutino\n");
	printf("Digite V para Vespertino\n");
	printf("Digite N para Noturno\n");
	scanf("%c", &turno);
	
	if(turno == 'M' || turno == 'm'){
		printf("Bom Dia!");
		
	}else if (turno == 'V' || turno == 'v'){
		printf("Boa Tarde!");
		
	}else if (turno == 'N' || turno == 'n'){
		printf("Boa Noite");
	}else{
		printf("Valor invalido");
	}
	
	
}
