#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float nr, sob;
int arre;


int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Insira um n�mero (para deciamal utilizar virgula e n�o ponto): ");
	scanf("%f", &nr);
	
	arre = nr+1;
	sob = arre - nr;
	if(sob == 1){
		printf("O numero %.0f � INTEIRO. ", nr);
		
	}else{
		printf("O numero %.0f � DECIMAL");
	}
	
}
