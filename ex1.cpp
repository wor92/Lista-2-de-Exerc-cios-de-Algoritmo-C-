#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int nr1, nr2;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite primeiro número: ");
	scanf("%d", &nr1);
	printf("Digite segundo número: ");
	scanf("%d", &nr2);
	
	if(nr1 > nr2){
		printf("O número %d é maior que o número %d\n", nr1, nr2);
	}else if(nr1 < nr2){
		printf("O número %d é maior que o número %d\n", nr1, nr2);
	}else{
		printf("Os numeros são iguais. ");
	}
	
	
	
}
