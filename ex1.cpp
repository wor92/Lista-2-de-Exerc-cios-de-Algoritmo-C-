#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int nr1, nr2;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite primeiro n�mero: ");
	scanf("%d", &nr1);
	printf("Digite segundo n�mero: ");
	scanf("%d", &nr2);
	
	if(nr1 > nr2){
		printf("O n�mero %d � maior que o n�mero %d\n", nr1, nr2);
	}else if(nr1 < nr2){
		printf("O n�mero %d � maior que o n�mero %d\n", nr1, nr2);
	}else{
		printf("Os numeros s�o iguais. ");
	}
	
	
	
}
