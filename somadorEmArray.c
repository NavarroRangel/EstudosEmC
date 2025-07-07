#include <stdio.h>


int main(){
	
	int	pontos[10], soma = 0;
	
	for (int i = 0; i < 10; i++){
		printf("Digite a pontuacao(%d de 10) :", i+1);
		scanf("%d", &pontos[i]);
	
		soma += pontos[i];
	
	}
	printf("%d", soma);
	
	
	
	return 0;
}
