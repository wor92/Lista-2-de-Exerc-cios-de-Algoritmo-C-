#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

char op;
float n1, n2, cal,sob;
int arre;

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Insira o 1� n�mero: ");
	scanf("%f",&n1);
	printf("Insira o 2� n�mero: ");
	scanf("%f",&n2);
	printf("A - Adi��o.\nS - Subtra��o.\nM - Multiplica��o.\nD - Divis�o.\n");
	printf("Conforme a tabela acima.\n");
	
	printf("Digite a letra correspondente para selecionar a opera��o: ");
	scanf(" %c",&op);
	
	if(op == 'A' || op == 'a'){
		printf("Opera��o de adi��o.\n");
		cal = n1+n2;
	}else if(op == 'S' || op == 's'){
		printf("Opera��o de subtra��o.\n");
		cal = n1-n2;
	}else if(op == 'M' || op == 'm'){
		printf("Opera��o de multiplica��o.\n");
		cal = n1*n2;
	}else if(op == 'D' || op == 'd'){
		printf("Opera��o de divis�o.\n");
		cal = n1/n2;
	}else{
		printf("Opera��o inv�lida....");
	}
	
	arre = cal+1;
	sob = arre-cal;
	if(sob == 1){
		printf("O resultado %.0f � INTEIRO.\n",cal);
		if(int(cal)%2 == 0){
			printf("O resultado %.0f � PAR.\n",cal);
		}else{
			printf("O resultado %.0f � �MPAR.\n",cal);
		}
		if(cal >= 0){
			printf("O resultado %.0f � POSITIVO.\n",cal);
		}else{
			printf("O resultado %.0f � NEGATIVO.\n",cal);
		}
	}else{
		printf("O resultado %.2f � DECIMAL.\n",cal);
		if(cal >= 0){
			printf("O resultado %.2f � POSITIVO.\n",cal);
		}else{
			printf("O resultado %.2f � NEGATIVO.\n",cal);
		}
	}
}
