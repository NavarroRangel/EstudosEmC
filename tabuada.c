#include <stdio.h>

int main(){
	//LOOp for aninhado!
	// Fazer uma tabuada
	for(int i = 0; i <= 10; i++){
		printf("\n=================================\n");
		printf("\n\nTabuada do %d \n\n",i);
		
		for (int j = 0; j <= 10; j++){
			int resultado = i * j;
			printf("%d X %d = %d \n",i,j,resultado);
		}
	}
	
	return 0;
}
