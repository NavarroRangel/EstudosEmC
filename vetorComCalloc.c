#include <stdio.h>
#include <stdlib.h>



int main (){
	int tamanho;
	int *vetor;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	vetor = (int *) calloc(tamanho, sizeof(int));
	
	if(vetor == NULL){
		printf("Erro: memoria insuficiente.");
		return 1;
	}
	
	for(int i = 0; i < tamanho; i++){
		vetor[i] = i * 10;
	}
	
	printf("Vetor diamico populado: \n");
	for(int i = 0; i < tamanho; i++){
		printf("%d \n", vetor[i]);
	}
	
	free(vetor);
	
	
	
	
	return 0;
}
