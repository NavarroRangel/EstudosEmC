#include <stdio.h>


int main (){
	int valoresMatriz [4][4];
	int somaDiagonal = 0;
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("Digite o valor do elemento na posicao linha %d x coluna %d ", i+1,j+1);
			scanf("%d",&valoresMatriz[i][j]);
			printf("\n");
		}
	}
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j< 4; j++){
			if(i == j){
				somaDiagonal += valoresMatriz[i][j];
			}
		}
	}
	printf("Soma da diagonal = %d", somaDiagonal);
	
	return 0;
}
