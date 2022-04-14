#include <stdio.h>
#include <stdlib.h>

int main(){
	float salario,valorPensao,pPensao,salarioLiquido;
	printf("Informe o salario total: ");
	scanf("%f",&salario);
	printf("Informe a porcentagem paga de pensao: ");
	scanf("%f",&pPensao);
		
	valorPensao = (salario*pPensao)/100;
	
	salarioLiquido = (salario - valorPensao);
	
	printf("O valor a ser pago de pensao e %.2f \n e o salario liquido e de %.2f", valorPensao, salarioLiquido);
	
}
