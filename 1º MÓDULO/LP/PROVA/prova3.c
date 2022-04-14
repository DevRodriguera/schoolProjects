#include <stdio.h>
#include <stdlib.h>
int main(){

	int pAtraso;
	float vPrestacao, total, totalP,txPeriodica;
	
	printf("Programa que calcula o valor de uma prestacao em atraso");
	getch();
	
	printf("\nInforme o valor da prestacao vencida: ");
	scanf("%f",&vPrestacao);
	printf("Informe a taxa periodica de juros: ");
	scanf("%f",&txPeriodica);
	printf("Informe o periodo de atraso em meses: ");
	scanf("%d",&pAtraso);

	totalP = ((vPrestacao*txPeriodica)/100)*pAtraso;
	total = (totalP + vPrestacao);
	
	printf("Valor da parcela atrasada: %.2f \nValor dos juros: %.2f", total, totalP);

}
