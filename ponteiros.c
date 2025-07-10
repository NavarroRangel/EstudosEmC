#include <stdio.h>

int main(){
	
	int numero = 42;
	int *n = &numero; //PONTEIRO
	// & aponta para o endereço de memoria da variavel numero!
	
	// aqui seria um caso de ganho gigante de memória
	//metaforicamente vamos pensar que a variavel numero é sua casa e voce quer mostrar onde ela e para alguem
	//Ñesse exemplo abaixo é como se eu tentasse pegar um guindaste e levasse a casa até determinada pessoa
	// Ao invees de simplesmente passar o endereço "Rua tal, numero tal, bairro tal, cidade tal"
	// Ponteiros são esse endereço
	printf("Antes: %d", numero);
	printf("\n");
	//Reatribuir o valor simplesmente pelo endereço, mudei o endereço sem precisar mudar toda a casa
	// GANHO DE PERFORMANCE!
	*n = 10;
	printf("Depois: %d",numero);
	
	return 0;
}
