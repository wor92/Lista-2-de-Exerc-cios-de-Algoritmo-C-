#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

char s;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite um sexo (F para Feminino M para Masculino): ");
	scanf("%c", &s);
	
	if(s == 'F' || s == 'f'){
		printf("O sexo escolhido foi: F - Feminino\n");
	}else if(s == 'M' || s == 'm'){
		printf("O sexo escolhifo foi: M - Masculino\n");
	}else{
		printf("Sexo invalido");
	}
	
	
}
