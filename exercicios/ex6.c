#include <stdio.h>

int main (){
	int cartoesAmarelos;
	int cartoesVermelhos;
	
	printf("Quantos cartoes amarelos esse jogador possui?\n");
	scanf("%d", &cartoesAmarelos);
	printf("Esse jogador tem cartao vermelho? digite 1 para caso ele possua ou 0 caso ele nao possua \n");
	scanf("%d", &cartoesVermelhos);
	
	printf("Pensando... \n");
	
	if(cartoesAmarelos >= 2 || cartoesVermelhos == 1 ){
		printf("VOCE FOI EXPULSO, SAIA DO CAMPO!");
		
	} else {
		printf("Cuidado Para nao tomar cartao");
	}
	
	return 0;
}
