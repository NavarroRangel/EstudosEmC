#include <stdio.h>
#include <string.h>

int main( ){
	
	char nome[] = "Joao";
	char sobrenome[] = " Silva";
	
	strcat(nome, sobrenome);// concatena, !!!! substitui valor da primeira variável e concatena !!!!
	printf("Nome completo: %s \n", nome);
	
	printf("Tamanho: %d \n", strlen(nome));
	
	if (strcmp(nome, "Joao Silva") == 0){
		printf("Nome correto!\n");
	} else {
		printf("Nome incorreto! \n");
	};
	
	
	return 0;
}
