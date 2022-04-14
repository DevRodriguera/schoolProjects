#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float altura,peso, imc;
	
	printf("Programa para calcular IMC");
	getch();
	
	printf("\n\n Informe sua altura ");
	scanf("%f", &altura);

    printf("\n\n Informe seu peso ");
	scanf("%f", &peso);
	
    imc = peso/(altura*2);
	
	printf("\n Seu IMC e de %.2f", imc);
    
	getch();
	
	return 0;
}
