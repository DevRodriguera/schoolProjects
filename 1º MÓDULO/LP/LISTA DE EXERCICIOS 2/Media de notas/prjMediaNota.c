#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float b1,b2,b3,b4, soma;
	
	printf("Programa que soma a nota");
	getch();
	
	printf("\n\n Informe a nota do primeiro bimestre: ");
	scanf("%f", &b1);
	printf("\n\n Informe a nota do primeiro bimestre: ");
	scanf("%f", &b2);
	printf("\n\n Informe a nota do primeiro bimestre: ");
	scanf("%f", &b3);
	printf("\n\n Informe a nota do primeiro bimestre: ");
	scanf("%f", &b4);
	
    soma = (b1+b2+b3+b4)/4;
	
	if(soma > 5){
		printf("\n Parabens voce foi aprovado. Nota = %.2f", soma);
	}else{
		printf("\n Voce nao foi aprovado. Nota = %.2f",soma);
	}

	getch();
	
	return 0;
}
