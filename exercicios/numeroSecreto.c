#include <stdio.h>

int main (){
	int numeroSecreto = 7;
	int palpite;
	int contador;
	
	do{
		printf("Tente acertar o numero secreto, entre 1 e 10 \n");
		scanf("%d",&palpite);
		contador++;
	} while (numeroSecreto != palpite);
	printf("Voce acertou, com %d tentativas! o numero secreto era: %d",contador,palpite);
	
		
	
	
	
	return 0;
}
