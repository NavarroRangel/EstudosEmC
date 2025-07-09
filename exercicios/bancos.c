#include <stdio.h>


int main(){
	int valores[2][3];
	int arrecadado = 0;
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			printf("Agencia %d, Dia %d ", i+1, j+1);
			scanf(" %d", &valores[i][j]);
			printf("\n");
		}
	}
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 3; j++){
			arrecadado += valores[i][j];
		}
	}
	
	printf("O valor arrecadado foi de: %d ", arrecadado);
	
	
	
	
	return 0;
}
