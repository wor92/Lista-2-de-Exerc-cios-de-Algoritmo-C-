#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int year;


int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite um ano (Formato AAAA): ");
	scanf("%d", &year);
	
	if(year % 4 == 0 || year % 400 == 0 && year % 100 !=0){
		printf("Ano � Bissexto. ", year);
		
	}else{
		printf("Ano n�o � Bissexto. ", year);
	}
	
}
