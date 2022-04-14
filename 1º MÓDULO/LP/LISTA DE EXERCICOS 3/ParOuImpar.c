#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	
	printf("Informe um numero ");
	scanf("%d",&num);
	
	if(num % 2){
		printf("Impar");
	}else{
		printf("Par");
	}
	
}
