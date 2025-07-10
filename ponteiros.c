#include <stdio.h>

int main(){
	
	int numero = 42;
	int *n = &numero; //PONTEIRO
	// & aponta para o endere�o de memoria da variavel numero!
	
	// aqui seria um caso de ganho gigante de mem�ria
	//metaforicamente vamos pensar que a variavel numero � sua casa e voce quer mostrar onde ela e para alguem
	//�esse exemplo abaixo � como se eu tentasse pegar um guindaste e levasse a casa at� determinada pessoa
	// Ao invees de simplesmente passar o endere�o "Rua tal, numero tal, bairro tal, cidade tal"
	// Ponteiros s�o esse endere�o
	printf("Antes: %d", numero);
	printf("\n");
	//Reatribuir o valor simplesmente pelo endere�o, mudei o endere�o sem precisar mudar toda a casa
	// GANHO DE PERFORMANCE!
	*n = 10;
	printf("Depois: %d",numero);
	
	return 0;
}
