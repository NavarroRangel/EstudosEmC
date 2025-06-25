#include <stdio.h>

int main (){
	
	int opcao;
	printf("Selecione seu pedido,somento com o numero!\n");
	printf("1.Hamburguer\n");
	printf("2.Cachorro quente\n");
	printf("3.Pizza\n");
	printf("4.Sair\n");
	
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
			printf("Voce escolheeu  haburguer!");
			break;
		case 2:
			printf("Voce escolheu cachorro quente");
			break;
		case 3:
			printf("Voce escolheu pizza!");
			break;
		case 4:
			printf("Encerrando Pedido");
			break;
		default:
			printf("Lanche nao encontrado, digite o numero do lanche que deseja");
	}

	
	
	return 0;
	
}
