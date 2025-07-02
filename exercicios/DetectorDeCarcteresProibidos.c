#include <stdio.h>
#include <string.h>

int main(){
	char nomeJogador[] = "Navarro#\n";
	if(strlen(nomeJogador) >50){
		printf("NOme muito grande!Limite de 50 caracteres \n");
	} else {
		printf("Nome dentro do tamanho padrao! \n");
	}
	
    char *caracteresProibidos = "!@#$%^&*()_+={}[];:'\"<>,.?/\\|`~";
	
	char *stringProibida = strpbrk(nomeJogador, caracteresProibidos);
	
	if (stringProibida != NULL){
		printf("Nome proibidio! Caractere encontrado: '%c' \n", *stringProibida);
	} else {
		printf("Nome Liberado \n");
	}
	
	return 0;
}
