#include <stdio.h>
#include <stdlib.h>
int main(){

	int horasTrab, horaExt, valorHExt, horasNormal;
	float valorHTrab, salarioTotal;
	
	printf("programa que calcula as horas trabalhadas em um mes.");
	getch();
	
	printf("\nInforme quantas horas foram trabalhadas no mes: ");
	scanf("%d",&horasTrab);
	printf("Informe o valor da hora trabalhada: ");
	scanf("%f",&valorHTrab);

	if(horasTrab > 160){
		
		horaExt = horasTrab-160;
		valorHExt = ((valorHTrab*50)/100+valorHTrab)*horaExt;
		horasNormal = horasTrab - horaExt;
		salarioTotal = valorHExt + (valorHTrab*horasNormal);
		
		return printf("\nHora extra trabalhada: %dh. \nValor a receber de horas extras: %d \nSalario total: %.2f", horaExt, valorHExt, salarioTotal);
	}else{
		salarioTotal = valorHTrab*horasTrab;
		return printf("\nNao ha horas extras. \nValor a receber: %.2f", salarioTotal);
	}
}
