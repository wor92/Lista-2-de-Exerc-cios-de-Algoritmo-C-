#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int n1, n2, n3, prim, seg, ter;


int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Digite primeiro n�mero: ");
	scanf("%d", &n1);
	printf("Digite segundo n�mero: ");
	scanf("%d", &n2);
	printf("Digite terceiro n�mero: ");
	scanf("%d", &n3);
	
		if(n1 > n2 && n1 > n3){
		prim = n1;
		if (n2 > n3){
			seg = n2;
			ter = n3;
		}else{
			seg = n3;
			ter = n2;
		}
	}else if(n2 > n1 && n2 > n3){
		prim = n2;
		if(n1 > n3){
			seg = n1;
			ter = n3;
		}else{
			seg = n3;
			ter = n1;
		}
	}else{
		prim = n3;
		if(n1 > n2){
			seg = n1;
			ter = n2;
		}else{
			seg = n2;
			ter = n1;
		}
	}
	printf("%d\n",prim);
	printf("%d\n",seg);
	printf("%d\n",ter);
	
	
}
