#include <stdio.h>

int main (){
	int dias;
	
	printf("Digite quantos dias de treinamento: \n");
	scanf("%d", &dias);
	
	for (int i = 0; i < dias; i++){
		printf("Dia %d ta pago! \n", i);
	}
	
	
	return 0;
}
