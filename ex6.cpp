#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>


int n1, n2, n3;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite primeiro número: ");
	scanf("%d", &n1);
	printf("Digite segundo número: ");
	scanf("%d", &n2);
	printf("Digite terceiro número: ");
	scanf("%d", &n3);
	
	if(n1 > n2 && n1 > n3){
		printf("O maior número é o primeiro %d: ", n1);
	}else if (n2 > n1 && n2 > n3){
		printf("O maior número é o segundo %d: ", n2);
	
	}else{
		printf("O maior número é o terceiro %d: ", n3);
	}
	
	
	
}
