#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float sal, newSal, reaj, por;


int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Informe salario atual do colaborador em R$ ");
	scanf("%f", &sal);
	
	if(sal <= 280){
		por = 0.20;
		
	}else if (sal > 280 && sal <= 700){
		por = 0.15;
	}else if(sal > 700 && sal <= 1500){
		por = 0.10;
	}else{
		por = 0.05;
	}
	
	reaj = por*sal;
	newSal = sal + reaj;
	por = por*100;
	printf("Salario antes do reajuste R$%.2f\n", sal);
	printf("Percentual de reajuste foi de %.0f%%\n", por);
	printf("O valor do aumento em R$%.2f\n", reaj);
	printf("Novo salario em R$%.2f\n", newSal);
	
	
}
