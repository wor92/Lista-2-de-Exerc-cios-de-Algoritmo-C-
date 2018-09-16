#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

char letter;

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Escreva uma letra: ");
	scanf("%c",&letter);
	
	if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U'){
		printf("A letra %c, é uma VOGAL", letter);
	}else{
		printf("A letra %c é uma CONSOANTE", letter);
	}
	
}
