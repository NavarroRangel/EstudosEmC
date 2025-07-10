#include <stdio.h>


void aumenta(int *n){
	(*n)++;
}

int main (){
	int numero = 5;
	
	aumenta(&numero);
	printf("%d ",numero);
	
	
	
	return 0;
	
	
}
