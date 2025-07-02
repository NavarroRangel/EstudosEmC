#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	srand(time(NULL));
	int numero =  rand() % 100; //Entre 0 e 99
	printf("Numero aleatorio: %d \n", numero);

	
	
	char texto[] = "123";
	
	int valor = atoi(texto);
	
	printf("Convertido somado com aleatorio: %d  \n", valor + numero);
	return 0;
}
