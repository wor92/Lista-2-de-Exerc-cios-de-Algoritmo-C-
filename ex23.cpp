#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float nr, sob;
int arre;


int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Insira um número (para deciamal utilizar virgula e não ponto): ");
	scanf("%f", &nr);
	
	arre = nr+1;
	sob = arre - nr;
	if(sob == 1){
		printf("O numero %.0f é INTEIRO. ", nr);
		
	}else{
		printf("O numero %.0f é DECIMAL");
	}
	
}
