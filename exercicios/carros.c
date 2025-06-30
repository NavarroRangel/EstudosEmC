#include <stdio.h>


int main (){
	
	int quantidadeResgisto;
	printf("Digite quantos carros quer cadastrar \n");
	scanf("%d",&quantidadeResgisto);
	
	for (int i = 1; i <= quantidadeResgisto; i++){
		char modelo[15];
		int ano;
		int funciona;
		
		printf("Digite o modelo do carro! \n ");
		scanf("%s", modelo);
		
		printf("Digite o ano de fabricacao do carro! \n ");
		scanf("%d", &ano);
		
		printf("O carro funciona? 1 para sim e 0 para nao! \n ");
		scanf("%d", &funciona);
		
		if(ano < 2005 && funciona == 0){
			printf("O carro %s precisa de REPAROS URGENTES!\n",modelo);
		} else if( ano < 2005 && funciona == 1){
			printf("O carro %s e antigo, recomenda-se uma revisao \n", modelo);
		} else if(ano >= 2005 && funciona == 0){
			printf("O carro %s precisa de manutencao! \n", modelo);
		} else if (ano >= 2005 && funciona == 1){
			printf("O carro %s esta em boas condicoes \n", modelo);
		} else {
			printf("O carro %s nao foi dito se funcionava ou Nao \n", modelo);
		}
		printf("\n ===================PROXIMO==============	\n\n");x
		
		
	}
	
	return 0;
}
