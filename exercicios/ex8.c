#include <stdio.h>


int main(){
	int golsMarcados;
	
	printf("Quantos gols voce marcou nessa temporada? \n");
	scanf("%d", &golsMarcados);
	
	if (golsMarcados > 10 ){
		printf("Execelente temporada!");
	} else if (golsMarcados >= 5 && golsMarcados <=10){
		printf("Boa temporada!");
	} else {
		printf("Temporada abaixo do esperado!");
	}
	
	return 0;
}
