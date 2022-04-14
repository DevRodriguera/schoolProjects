#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int anoNasc, anoAt, x;
	
	printf("Programa para calcular sua idade");
	getch();
	
	printf("\n\n Informe o ano que voce nasceu  ");
	scanf("%d", &anoNasc);

    printf("\n\n Informe em qual ano voce esta agora  ");
	scanf("%d", &anoAt);
	
    x = anoAt - anoNasc;
	
	printf("\n voce tem %d anos", x);
    
	getch();
	
	return 0;
}
