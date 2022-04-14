#include <stdio.h>
#include <stdlib.h>

int main void(){
	
	int n, nAnte, nSuc;
	
	printf("Programa para mostrar o antecessor e sucessor");
	getch();
	
	printf("\n\n Informe um numero inteiro ");
	scanf("%d", &n);
	
	nAnte = n - 1;
	
	nSuc = n + 1;
	
	printf("\n Numero antecessor %d\n", nAnte);
	printf("\n Numero sucessor %d\n", nSuc );

	getch();
	
	return 0;
}