#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int h, desIR;
float sal, vh, salLiq, IR, INSS, FGTS, sind, ttDes;


int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Forneça o numero de horas trabalhadas: ");
	scanf("%d", &h);
	printf("Insira o valor pago por hora em R$ ");
	scanf("%f", &vh);
	
	sal = h*vh;
	if(sal <= 900 ){
		IR = 1;
		
	}else if(sal > 900 && sal <= 1500){
		IR = 0.05;
		
	}else if(sal > 1500 && sal <= 2500){
		IR = 0.10;
		
	}else{
		IR = 0.20;
	}
	
	desIR = IR*100;
	
	if(desIR == 100 && IR  == 1){
		desIR = 0;
		IR = 0; 
	}
	
	IR = IR*sal;
	INSS = 0.10*sal;
	FGTS = 0.11*sal;
	sind =  0.03*sal;
	ttDes = IR + INSS + sind;
	salLiq = sal - ttDes;
	
	printf("(+)		Salário Bruto :R$%.2f\n",sal);
	printf("(-)		IR(%d%%) :R$%.2f\n",desIR,IR);
	printf("(-)		INSS(10%%) :R$%.2f\n",INSS);
	printf("(-)		Sindicato(3%%) :R$%.2f\n",sind);
	printf("FGTS(Não descontado (11%%)	:R$%.2f\n",FGTS);
	printf("Total de descontos :R$%.2f\n",ttDes);
	printf("Salário Líquido :R$%.2f\n",salLiq);
	
}
