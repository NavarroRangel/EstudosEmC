#include <stdio.h>


int main(){
	int valoresMatriz [4][4];
	
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
				printf(" 1 ");
			} else{
				printf(" 0 ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
