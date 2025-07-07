#include <stdio.h>

int main (){
	
	int ataques[4];
	int maxAtaque = 0;
	
	printf("Digite o dano de 4 ataques:\n");
	for(int i = 0; i < 4; i++){
		printf("Ataque %d: ",i+1);
		scanf("%d", &ataques[i]);
		printf("\n");
		
		if(ataques[i] > maxAtaque){
			maxAtaque = ataques[i];
		}

	}
	
	printf("Ataque mais forte %d \n", maxAtaque);

	return 0;
}
