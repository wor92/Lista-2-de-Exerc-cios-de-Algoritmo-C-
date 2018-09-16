#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int nr;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Insira um número inteiro: ");
	scanf("%d", &nr);
	
	if (nr%2 == 0){
		printf("O numero %d é par", nr);
		
	}else{
		printf("O numero %d é impar", nr);
	}
	
}
