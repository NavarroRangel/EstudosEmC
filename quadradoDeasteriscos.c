#include <stdio.h>

int main(){
	
	int arestaQuadrado;
	
	printf("Digite o quadrado que voce quer!\n");
	scanf("%d", &arestaQuadrado);
	
	for(int i = 0; i <= arestaQuadrado - 1; i++ ){
		for(int j = 1; j<= arestaQuadrado ; j++){
			printf("*");
		}
		printf("\n");
		

	}
	
	
	return 0;
}
