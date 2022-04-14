#include <stdio.h>
#include <stdlib.h>
int main(){

	float alunos, desistentes, dIngles, dFundamentos, tDesistentes, tIngles, tFI, tAlunos;
	
	printf("Programa que mostra quantos alunos continuaram no curso.\n");
	getch();
	
	printf("\nInforme a quantidade de alunos matriculados no curso de DS: ");
	scanf("%f",&alunos);
	printf("Informe quantos alunos desistiram: ");
	scanf("%f",&desistentes);
	printf("Informe quantos alunos pegaram dispensa em Ingles: ");
	scanf("%f",&dIngles);
	printf("Informe quantos alunos pegaram dispensa em Fundamentos da Informaatica: ");
	scanf("%f",&dFundamentos);
	
	tAlunos = alunos - desistentes;
	tDesistentes = (alunos * desistentes)/100;
	tIngles = tAlunos - (tAlunos * dIngles)/100;
	tFI = (tAlunos * dFundamentos)/100;
	
	printf("\nQuantidade de alunos ingressantes no curso de DS : %.0f", alunos);
	printf("\nPorcentagem de alunos que desistiram do curso : %.2f", tDesistentes);
	printf("\nPorcentagem de quantos alunos frequentam a aula de  : %.2f", tIngles);
	printf("\nPorcentagem de quantos alunos não frequentam a aula de Fundamentos da informatica : %.2f", tFI);
}
