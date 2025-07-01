#include <stdio.h>

void exibirMenu(){
	printf("===== MENU DE OPCOES ==== \n");
	printf("1 - Ver saldo \n");
	printf("2 - Fazer deposito \n");
	printf("3 - fazer saque \n");
	printf("4 - Sair \n");
	printf("===================== \n");

}

int main(){
	
	exibirMenu();
	
	int opcao;
	scanf("%d", &opcao);
	
	printf("Voce escolheu a opcao %d \n", opcao);
	
	return 0;
}
