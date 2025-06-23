#include <stdio.h>

int main (){
	int vitorias;
	int derrotas;
	int empates;
	
	printf("Digite quantas vitorias voce conseguiu!\n");
	scanf("%d",&vitorias);
	printf("Digite quantas derrotas tiveram!\n");
	scanf("%d",&derrotas);
	printf("Digite quantos empates!\n");
	scanf("%d",&empates);
	
	int pontos = (vitorias * 3) + empates;
	
	printf("\n ===========PONTUACAO==========\n");
	printf("Voces marcaram %d pontos", pontos);
	
	
	return 0	;
}
