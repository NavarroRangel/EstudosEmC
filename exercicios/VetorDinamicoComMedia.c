#include <stdio.h>


int main(){
	float somaNotas = 0.0;
	int tamanho;
	float *vetor;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	vetor = (float * ) malloc(tamanho * sizeof(float));
	
	for(int i = 0; i < tamanho; i++){
		printf("Digite o elemento %d ", i+1);
		scanf("%f", &vetor[i]);
		printf("\n");
	}
	
	for(int i = 0; i < tamanho; i++){
		 somaNotas += vetor[i];  
	}
	float media = somaNotas / tamanho;
	printf("Sua media foi de %.2f", media);
		
	if(vetor == NULL){
		printf("Deu ruim!");
		return 1;
	}	
	free(vetor);
	return 0;
}
