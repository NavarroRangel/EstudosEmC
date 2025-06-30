#include <stdio.h>

int main(){
	int contador = 0;
	int moedas = 0;
	int moedasColetadas;
	
	while(moedas <= 100){
		printf("Quantas Moedas voce coletou nessa run? \n");
		scanf("%d", &moedasColetadas);
		contador++;
		moedas = moedas + moedasColetadas;
	}
	printf("Parabens voce coletou %d moedas em %d tentativas!", moedas, contador);
	
	
	
	return 0;
}
