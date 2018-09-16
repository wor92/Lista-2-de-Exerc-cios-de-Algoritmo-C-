#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

float prodA, prodB, prodC;


int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Informe preço do produto A em R$: ");
	scanf("%d", &prodA);
	printf("Informe preço do produto B em R$: ");
	scanf("%d", &prodB);
	printf("informe preço do produto C em R$: ");
	scanf("%d", &prodC);
	
	if(prodA < prodB && prodA < prodC){
		printf("Voce deve comprar o produto A.\n");
	}else if(prodB < prodA && prodB < prodC){
		printf("Voce deve comprar o produto B.\n");
	}else{
		printf("Voce deve comprar o produto C.\n ");
	}
}
