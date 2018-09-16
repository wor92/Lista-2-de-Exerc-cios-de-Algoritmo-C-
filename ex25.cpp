#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

char a,b,c,d,e;
int pontos = 0;

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Responda as proximas questões com S/N\n");
	printf("Telefonou para a vítima? : \n");
	scanf("%c",&a);
	printf("Esteve no local do crime? : \n");
	scanf(" %c",&b);
	printf("Mora perto da vítima? : \n");
	scanf(" %c",&c);
	printf("Devia para a vítima? : \n");
	scanf(" %c",&d);
	printf("Já trabalhou com a vítima? : \n");
	scanf(" %c",&e);
	
	if(a == 'S' || a == 's'){
		pontos += 1;
	}
	if(b == 'S' || b == 's'){
		pontos += 1;
	}
	if(c == 'S' || c == 's'){
		pontos += 1;
	}
	if(d == 'S' || d == 's'){
		pontos += 1;
	}
	if(e == 'S' || e == 's'){
		pontos += 1;
	}
	
	if(pontos == 5){
		printf("Você é o ASSASSINO!");
	}else if(pontos >= 3 && pontos < 5){
		printf("Você é o CÚMPLICE!");
	}else if(pontos == 2){
		printf("Você é um SUSPEITO!");
	}else{
		printf("Você é INOCENTE!");
	}
}
