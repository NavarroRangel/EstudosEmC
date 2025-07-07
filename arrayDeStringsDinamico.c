#include <stdio.h>


int main (){
	
	char nomes[3][20];
	
	for (int i = 0; i < 3; i++){
		printf("Digite O nome %d: ", i + 1);
		scanf("%s", nomes[i]);
	}
	for (int i = 0; i < 3; i++){
		printf("Nome %d: ", i + 1);
		printf("%s \n", nomes[i]);
	}
	
	
	
	return 0;
}
