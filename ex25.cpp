#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

char a,b,c,d,e;
int pontos = 0;

int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Responda as proximas quest�es com S/N\n");
	printf("Telefonou para a v�tima? : \n");
	scanf("%c",&a);
	printf("Esteve no local do crime? : \n");
	scanf(" %c",&b);
	printf("Mora perto da v�tima? : \n");
	scanf(" %c",&c);
	printf("Devia para a v�tima? : \n");
	scanf(" %c",&d);
	printf("J� trabalhou com a v�tima? : \n");
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
		printf("Voc� � o ASSASSINO!");
	}else if(pontos >= 3 && pontos < 5){
		printf("Voc� � o C�MPLICE!");
	}else if(pontos == 2){
		printf("Voc� � um SUSPEITO!");
	}else{
		printf("Voc� � INOCENTE!");
	}
}
