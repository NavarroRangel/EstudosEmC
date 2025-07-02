#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero1,numero2,numero3,numero4,numero5,numero6;
	numero1 = rand() % 60 + 1;
	numero2 = rand() % 60 + 1;
	numero3 = rand() % 60 + 1;
	numero4 = rand() % 60 + 1;
	numero5 = rand() % 60 + 1;
	numero6 = rand() % 60 + 1;
	
	printf("Sua fézinha deu %d, %d, %d, %d, %d, %d",numero1,numero2,numero3,numero4,numero5,numero6);
	
	
	
	return 0;
}
