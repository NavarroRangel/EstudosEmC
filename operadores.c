#include <stdio.h>

int main (){
	int num1 = 10, num2 = 2;
	
	int resultadoSoma;
	resultadoSoma = num1 + num2;
	
	int resultadoSubtracao;
	resultadoSubtracao = num1 - num2;
	
	printf("Adicao: %d + %d = %d \n", num1, num2, resultadoSoma );
	printf("Subtracao: %d - %d = %d", num1,num2, resultadoSubtracao );
	return 0;
}
