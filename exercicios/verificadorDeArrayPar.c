#include <stdio.h>

int main(){
	
	int numeros[10];
	int j = 0;
	int pares[j];
	
	printf("Digite 10 numeros, para ver quais sao pares\n");
	
	for(int i = 0; i < 10; i++){
		printf("\nDigite um numero: (Numero %d)\n", i+1);f
		scanf("%d", &numeros[i]);
		
		if(numeros[i] % 2 == 0){
			pares[j] = numeros[i];
			j++;
		}
		
}
		printf("\nPares\n");
		for(int i = 0; i < j; i++){
			printf("%d ", pares[i]);
		}
	
	return 0;
}
