#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>


int num,cent,deze,unid;

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Informe um número inteiro positivo menor que 1000: ");
	scanf("%d",&num);
	cent = num/100;
	deze = (num%100)/10;
	unid = ((num%100)%10);
	
	if(cent == 1 && unid == 0){
		printf("%d centena ",cent);
	}else if(cent > 1 && unid == 0){
		printf("%d centenas ",cent);
	}else if(cent == 1 && unid > 0 && deze != 0){
		printf("%d centena, ",cent);
	}else if(cent > 1 && unid > 0 && deze != 0){
		printf("%d centenas,  ",cent);
	}else if(cent == 1 && deze == 0){
		printf("%d centena ",cent);
	}else if(cent > 1 && deze == 0){
		printf("%d centenas ",cent);
	}else{
	}
	if(deze == 1 && unid == 0 && cent > 0){
		printf("e %d dezena ",deze);
	}else if(deze > 1 && unid == 0 && cent > 0){
		printf("e %d dezenas ",deze);
	}else if(deze == 1){
		printf("%d dezena ",deze);
	}else if(deze > 1){
		printf("%d dezenas ",deze);
	}else{
	}
	if(unid == 1 && cent == 0 && deze == 0){
		printf("%d unidade ",unid);
	}else if(unid > 1 && cent ==0 && deze == 0){
		printf("%d unidades ",unid);
	}else if(unid == 1){
		printf("e %d unidade ",unid);
	}else if(unid > 1){
		printf("e %d unidades ",unid);
	}else{
	}
	
	
}
