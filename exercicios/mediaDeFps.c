#include <stdio.h>

int main (){
	int fps[6];
	int soma = 0;
		
	printf("Digite o fps registrado em 6 momentos: \n");
	for(int i = 0; i < 6; i++){
		scanf("%d", &fps[i]);
		printf("\nMomento %d : %d\n", i+1,fps[i]);
		soma+=fps[i];
	}
	float media = soma/6;
	printf("Media %.2f",media);
	
	
	return 0;
}
