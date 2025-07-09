#include <stdio.h>


int main(){
	int matriz[3][2] = {
	//Matriz original
	{10, 12},
	{8, 7},
	{19, 20}
	};
	// Mostra a matriz em sua forma original!
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			printf(" %d ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n ==================== TRANSPOSTA ========== \n");
	 // Fazer a transposta ou seja 2x3
	 for(int i = 0; i < 2; i++){
	 	for(int j = 0; j < 3; j++){
			printf(" %d ",matriz[j][i]);
			
	 	}
	 	printf("\n");
	}
	 
	
	
	return 0;
}
