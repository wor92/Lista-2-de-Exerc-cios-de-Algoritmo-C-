#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

char op;
float n1, n2, cal,sob;
int arre;

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Insira o 1º número: ");
	scanf("%f",&n1);
	printf("Insira o 2º número: ");
	scanf("%f",&n2);
	printf("A - Adição.\nS - Subtração.\nM - Multiplicação.\nD - Divisão.\n");
	printf("Conforme a tabela acima.\n");
	
	printf("Digite a letra correspondente para selecionar a operação: ");
	scanf(" %c",&op);
	
	if(op == 'A' || op == 'a'){
		printf("Operação de adição.\n");
		cal = n1+n2;
	}else if(op == 'S' || op == 's'){
		printf("Operação de subtração.\n");
		cal = n1-n2;
	}else if(op == 'M' || op == 'm'){
		printf("Operação de multiplicação.\n");
		cal = n1*n2;
	}else if(op == 'D' || op == 'd'){
		printf("Operação de divisão.\n");
		cal = n1/n2;
	}else{
		printf("Operação inválida....");
	}
	
	arre = cal+1;
	sob = arre-cal;
	if(sob == 1){
		printf("O resultado %.0f é INTEIRO.\n",cal);
		if(int(cal)%2 == 0){
			printf("O resultado %.0f é PAR.\n",cal);
		}else{
			printf("O resultado %.0f é ÍMPAR.\n",cal);
		}
		if(cal >= 0){
			printf("O resultado %.0f é POSITIVO.\n",cal);
		}else{
			printf("O resultado %.0f é NEGATIVO.\n",cal);
		}
	}else{
		printf("O resultado %.2f é DECIMAL.\n",cal);
		if(cal >= 0){
			printf("O resultado %.2f é POSITIVO.\n",cal);
		}else{
			printf("O resultado %.2f é NEGATIVO.\n",cal);
		}
	}
}
