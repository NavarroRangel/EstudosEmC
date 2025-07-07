#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int fezinha[6] = {10,23,40,39,37,7};
	int megasena[6];
	int contador = 0;
	
	srand(time(NULL));
	
	printf("============ NUMEROS DA MEGA SENA ===============\n");
	for(int i = 0; i < 6; i++){
		megasena[i] = rand() % 60 + 1;
		printf("%d ",megasena[i]);
	}
	
	printf("\n\n=========== RESULTADO ======================\n");
	for(int i = 0; i < 6; i++){
		for (int j = 0; j < 6; j++){
			if(megasena[i] == fezinha[j]){
				printf("%d ", fezinha[j]);
				contador++;
			}
		}
	}

	printf("\nTotal de acertos: %d\n", contador);
	return 0;	
}
