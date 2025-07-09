#include <stdio.h>

int main (){
	
	int notas[3][2];


	for(int i = 0; i < 3; i++){// Linhas
		for (int j = 0; j<2; j++){//Colunas
			printf("Digite a nota do aluno %d, prova %d: ", i+1,j+1);
			scanf("%d", &notas[i][j]);
		}
	}
	
	printf("\n========= NOTAS ========= \n");
	
		for(int i = 0; i < 3; i++){// Linhas
			printf("Aluno %d: ", i + 1);
		for (int j = 0; j<2; j++){//Colunas
			printf("%d ",notas[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
