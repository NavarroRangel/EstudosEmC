#include <stdio.h>

int main (){
	
	int idade, golsMarcados;
	
	printf("Qual a idade do jogador? \n");
	scanf("%d", &idade);
	
	printf("Quantos gols marcou? \n");
	scanf("%d", &golsMarcados);
	
	if(idade <= 20 && golsMarcados > 10){
		printf("Jovem talento promissor!");
	} else if(idade <= 20 && golsMarcados <= 10){
		printf("jovem em desenvolvimento");
	} else if (idade < 20 && golsMarcados < 15 ){
		printf("Jogador experiente em grande fase!");
	} else {
		printf("Estevao");
	}
	
	return 0;
	
	
}
