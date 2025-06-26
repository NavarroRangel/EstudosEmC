#include <stdio.h>

int main (){
	int numeroEscolhido;
	printf("Digite um numero para ver os pares que ele possue \n");
	scanf("%d", &numeroEscolhido);
	
	for(int  i = 0; i <= numeroEscolhido; i++){
		if(i % 2 == 0){
			printf("%d \n",i);
		} else{
		}
	}
	
	
	return 0;
}
