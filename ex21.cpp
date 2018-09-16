#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int saque, nota100, nota50, nota10, nota5, nota1;

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Informe o valor do saque(Número inteiro) em R$ ");
	scanf("%d",&saque);
	
	if(saque >= 10 && saque <= 600){
		nota100 = saque/100;
		nota50 = (saque%100)/50;
		nota10 = ((saque%100)%50)/10;
		nota5 = (((saque%100)%50)%10)/5;
		nota1 = (((saque%100)%50)%10)%5;
		if(nota100 > 0){
			printf("%d nota(s) de 100\n",nota100);
		}else{
		}
		if(nota50 > 0){
			printf("%d nota(s) de 50\n",nota50);
		}else{
		}
		if(nota10 > 0){
			printf("%d nota(s) de 10\n",nota10);
		}else{
		}
		if(nota5 > 0){
			printf("%d nota(s) de 5\n",nota5);
		}else{
		}
		if(nota1 > 0){
			printf("%d nota(s) de 1\n",nota1);
		}else{
		}
		printf("Totalizando: R$ %d",saque);
	
	}else{
		printf("Erro...\nSaque mínimo é de R$ 10\nSaque máximo é de R$ 600 ");
	}
	
}

	

		
