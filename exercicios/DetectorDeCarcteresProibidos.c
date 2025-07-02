#include <stdio.h>
#include <string.h>

void contadorDeCacteresProibidos(char nome[]){
	int contador = 0;
	char *caracteresProibidos = "!@#$%^&*()_+={}[];:'\"<>,.?/\\|`~";
	for(int i = 0; nome[i] != '\0'; i++ ){
		if(strchr(caracteresProibidos,nome[i]) != NULL){
			contador++;
		}
		
	} 
	printf("Caracteres proibidos encontrados: %d", contador);
}

int main(){
	char nomeJogador[] = "Navarr!!!!!!#@#!#&#!@";
	if(strlen(nomeJogador) >50){
		printf("NOme muito grande!Limite de 50 caracteres \n");
	} else {
		printf("Nome dentro do tamanho padrao! \n");
	}
	
    char *caracteresProibidos = "!@#$%^&*()_+={}[];:'\"<>,.?/\\|`~";
	
	char *stringProibida = strpbrk(nomeJogador, caracteresProibidos);
	
	if (stringProibida != NULL){
		printf("NOME PROIBIDO! ");
	   contadorDeCacteresProibidos(nomeJogador);
	} else {
		printf("Nome Liberado \n");
	}
	
	return 0;
}
