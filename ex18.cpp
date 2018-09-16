#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int day, month, year;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite um dia (formato DD): ");
	scanf("%d", &day);
	printf("Digite um mês(Fomato MM): ");
	scanf("%d", &month);
	printf("Digite um ano (AAAA): ");
	scanf("%d", &year);
	
	if(day > 0 && day <= 31 && month > 0 && month <= 12 && year > 0 && year <= 9999){
		printf("%d/%d/%d é uma data válida. ",day, month, year);
	}else{
		printf("%d/%d/%d não é uma data válida. ",day, month, year);
		
	}
	
}
