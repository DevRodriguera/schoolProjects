#include <stdio.h>
    
	 int main(void)
   
    {
    int a, b, aux;
    printf("Informe o primeiro valor: ");
    scanf("%d", &a);
        
	printf("Informe o primeiro valor: ");
	scanf("%d", &b);

    aux = a;
	a = b;
    b = aux;
    printf("%4d%4d\n", a, b);
    return 0;
}
