#include <stdio.h>
#include <stdlib.h>
int main(){

	int anos, meses, dias, tDias;
	
	printf("Programa que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a" 
	"idade dessa pessoa expressa apenas em dias.\n");
	getch();
	
	printf("\n Informe quantos anos voce tem: ");
	scanf("%d",&anos);
	printf("\n Informe quantos meses voce tem: ");
	scanf("%d",&meses);
	printf("\n Informe quantos dias voce tem: ");
	scanf("%d",&dias);

	anos= anos*365;
	meses = meses * 30;
	tDias = anos + meses + dias;
	
	printf("No total você tem %d dias vividos.", tDias);

}
