#include <stdio.h>

int main (){
	int tabuada;
	printf("Digite um numero que quer ver a tabuada!\n");
	scanf("%d",&tabuada);
	
	for(int i=0; i<=10; i++ ){
		int resultado = tabuada * i;
		printf("%d X %d = %d \n",tabuada,i, resultado);
	}
	
	
	return 0;
}
