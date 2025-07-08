#include <stdio.h>


int main (){
	char nomes[5][20];
	char letra;
	int j,encontrou ;
	
	printf("Digite 5 nomes com ate 20 caracteres cada!\n");
	
	for(int i = 0; i < 5; i++){
		printf("Digite o nome: (nome: %d)", i+1);
		scanf("%s",nomes[i]);
		
	}
	printf(" \n Escolha uma letra para verificar em quais nomes tem:\n");
	scanf(" %c", &letra);
	
	printf("\nNomes com a letra %c : \n", letra);
	for(int i = 0; i < 5; i++){
	 	encontrou = 0;
		for(j = 0; nomes[i][j] != '\0'; j++){
			if(nomes[i][j] == letra){
				encontrou = 1;
				printf("%s\n  ",nomes[i]);
				break;
			}
		}
	}
	
	
	return 0;
}
