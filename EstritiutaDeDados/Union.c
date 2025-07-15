#include <stdio.h>

union Dados{
	int numero;
	float flutuante;
	char c;
};

int main(){
	
	union Dados d1;
	
	d1.numero = 10;
	
	printf("Numero %d \n",d1.numero);
	
	d1.flutuante = 3.14;
	
	printf("Numero flutuante %.2f \n",d1.flutuante);
	printf("Numero %d \n",d1.numero);
	
	
	
	return 0;
}
