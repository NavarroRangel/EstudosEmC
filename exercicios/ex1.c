#include <stdio.h>

int main (){
	char nomedoJogador[8];
	int idadeJogador = 23;
	int quantidadeDeGols = 10;
	
	printf("Digite o nome do jogador! \n");
	scanf("%s", &nomedoJogador);
	printf("Digite a idade do jogador! \n ");
	scanf("%d", &idadeJogador);
	printf("Digite a quantidade de gols da carreira desse jogador! \n");
	scanf("%d", &quantidadeDeGols);
	
	printf("\n======================================================\n");
	
	printf("Nome do jogador: %s \n",nomedoJogador);
	printf("Idade do jogador: %d \n", idadeJogador);
	printf("Gols na carreira: %d \n", quantidadeDeGols);
	
	
	return 0;
}
