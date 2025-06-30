#include <stdio.h>

int main (){
	
	int contador = 1;
	int senha;
	
	while(contador <= 5){
		printf("Contando: %d \n",contador);
		contador++; //Incremento
	}
	
	do {
		printf("Digite a senha correta(1234)");
		scanf("%d", &senha);
	} while (senha != 1234);
	printf("acesso Liberado! \n");
	
	return 0;
}
