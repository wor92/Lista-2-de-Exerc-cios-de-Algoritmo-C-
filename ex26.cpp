#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float preco,total;
char tipo;
int litro;

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Informe a quantidade de combust�vel em litros: ");
	scanf("%d",&litro);
	printf("Escolha o tipo de combustivel (A - �LCOOL ou G - GASOLINA): ");
	scanf(" %c",&tipo);
	
	if(tipo == 'A' || tipo == 'a'){
		if(litro <= 20){
			printf("�lcool - Desconto de 4%%\n");
			preco = 1.90-(0.04*1.90);
		}else{
			printf("�lcool - Desconto de 6%%\n");
			preco = 1.90-(0.06*1.90);
		}
	}else if(tipo == 'G' || tipo == 'g'){
		if(litro <= 20){
			printf("Gasolina - Desconto de 4%%\n");
			preco = 2.50-(0.04*2.50);
		}else{
			printf("Gasolina - Desconto de 6%%\n");
			preco = 2.50-(0.06*2.50);
		}
	}else{
		printf("Tipo de combust�vel inv�lido...");
	}
	total = litro*preco;
	printf("Valor total em R$%.2f",total);
}
