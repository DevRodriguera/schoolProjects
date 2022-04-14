#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int parc, aux;
	float vlCompra,vlParc;
	
	printf("Programa parcelar valor de uma compra");
	getch();
	
	printf("\n\n Informe o valor da compra: ");
	scanf("%f", &vlCompra);

    printf("\n\n Informe em quantas vezes você vai parcelar: ");
	scanf("%d", &parc);
	
    vlParc = vlCompra/parc;

	if(vlParc == 0){
		printf("par");
	}else{
		printf("impar");
	}
	
	
	getch();
	
	return 0;
}
