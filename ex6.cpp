#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>


int n1, n2, n3;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite primeiro n�mero: ");
	scanf("%d", &n1);
	printf("Digite segundo n�mero: ");
	scanf("%d", &n2);
	printf("Digite terceiro n�mero: ");
	scanf("%d", &n3);
	
	if(n1 > n2 && n1 > n3){
		printf("O maior n�mero � o primeiro %d: ", n1);
	}else if (n2 > n1 && n2 > n3){
		printf("O maior n�mero � o segundo %d: ", n2);
	
	}else{
		printf("O maior n�mero � o terceiro %d: ", n3);
	}
	
	
	
}
