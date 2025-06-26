#include <stdio.h>

int main(){
	int numeroFinal;
	printf("Digite um numero para somar de 1 ate ele \n");
	scanf("%d",&numeroFinal);
	
	int cofre = 0;
	for(int i = 1; i <= 5 ; i++ ){
		cofre = cofre + i;
		printf("%d \n", cofre);
	
	}

	return 0;
}
