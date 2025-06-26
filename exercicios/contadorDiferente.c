#include <stdio.h>

int main(){
	int numeroFinal;
	printf("Digite um numero para somar de 1 ate ele \n");
	scanf("%d",&numeroFinal);
	
	int cofre = 0;
	for(int i = 1; i <= numeroFinal ; i++ ){
		cofre = cofre + i;
	
	}
	printf("A soma de 1 ate %d e : %d ",numeroFinal, cofre);

	return 0;
}
