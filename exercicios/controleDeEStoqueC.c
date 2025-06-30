#include <stdio.h>


int main(){
	
	int quantidadeProdutos;
	printf("Quantos produtos quer cadastrar \n");
	scanf("%d",&quantidadeProdutos);
	
	for(int i = 0; i < quantidadeProdutos; i++ ){
		char nomeProduto[15];
		int quantidadeEmEStoque;
		int minimo;
		
		printf("Digite o nome Do produto\n");
		scanf("%s",nomeProduto);
		
		printf("Quantidade em Estoque \n");
		scanf("%d",&quantidadeEmEStoque);
		
		printf("Estoque minimo recomendado \n");
		scanf("%d",&minimo);
		
		if(quantidadeEmEStoque < minimo ){
			printf("O produto '%s' precisa ser reposto! (Estoque: %d, Minimo: %d)\n ",
			 nomeProduto,
			 quantidadeEmEStoque,
			 minimo
			);
		} else {
			printf("O produto '%s' Tem estoque Suficiente! (Estoque: %d, Minimo: %d) \n",
			nomeProduto,
			quantidadeEmEStoque,
			minimo
			);
		}
		printf("\n ============PROXIMO PRODUTO=================\n");
	}
	
	
	return 0;
}
