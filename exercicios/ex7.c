#include <stdio.h>


int main (){
	int idade;
	
	printf("Digite sua idade para verificar se voce esta apto a disputar esse sub-20 \n");
	scanf("%d", &idade);
	if (idade <= 20){
		printf("Pode jogar esse campeonato!");
	} else{
		printf("Vai ter que ir pra carreira profissional!");
	}
	
	
	return 0;
}
