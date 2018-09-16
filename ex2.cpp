#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int v;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Informe um valor: ");
	scanf("%d", &v);
	
	if(v < 0){
		printf("O valor %d é negativo", v);
	}else{
		printf("O valor %d é positivo", v);
	}
}
