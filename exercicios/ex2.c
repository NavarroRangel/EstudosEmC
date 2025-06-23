#include <stdio.h>

int main (){
	int numeroDeGols, partidasJogadas;
	float mediaDeGols;
	
	printf("Digite o numero de gols que voce marcou! \n");
	scanf("%d", &numeroDeGols);
	printf("Digite o numero de Partidas Jogadas \n");
	scanf("%d", &partidasJogadas);
	
	mediaDeGols = (float)numeroDeGols / partidasJogadas;

	printf("\n =============RESULTADO================\n");
	
	printf("Sua media de gols foi: %.2f", mediaDeGols);
	
	return 0;
}
