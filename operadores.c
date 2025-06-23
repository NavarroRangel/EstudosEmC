#include <stdio.h>

int main (){
	int num1 = 10, num2 = 2;
	
	int resultadoSoma;
	resultadoSoma = num1 + num2;
	
	int resultadoSubtracao;
	resultadoSubtracao = num1 - num2;
	
	int resultadoMultiplicacao;
	resultadoMultiplicacao = num1 * num2;
	
	printf("Adicao: %d + %d = %d \n", num1, num2, resultadoSoma );
	printf("Subtracao: %d - %d = %d \n", num1,num2, resultadoSubtracao );
	printf("Multiplicacao: %d * %d = %d \n", num1,num2,resultadoMultiplicacao);
	
	return 0;
}
