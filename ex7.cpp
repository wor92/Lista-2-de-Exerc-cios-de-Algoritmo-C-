#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int n1, n2, n3, menor, maior;

int main (){
	setlocale(LC_ALL, "portuguese");
	printf("Digite primeiro n�mero: ");
	scanf("%d", &n1);
	printf("Digite segundo n�mero: ");
	scanf("%d", &n2);
	printf("Digite terceiro n�mero: ");
	scanf("%d", &n3);
	
		if(n1 > n2 && n1 > n3){
		maior = n1;
			if(n2 < n3){
				menor = n2;
			}else{
				menor = n3;
			}
	}else if(n2 > n1 && n2 > n3){
		maior = n2;
		if(n1 < n3){
			menor = n1;
		}else{
			menor = n3;
		}
	}else{
		maior = n3;
		if(n1 < n2){
			menor = n1;
		}else{
			menor = n2;
		}
	}
	
	printf("O MAIOR n�mero � o %d\n",maior);
	printf("O MENOR n�mero � o %d\n",menor);
		
	
	
}
