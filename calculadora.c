#include <stdio.h>

int main (){
	char operador;// + - * /
	float a, b;
	float resultado;
	
	printf("Digite a opercao: (+), (-), (/), (*)\n");
	scanf("%c", &operador);
	
	printf("Digite o os 2 valores: \n");
	scanf("%f %f", &a,&b);
	
	switch (operador){
		case '+':
			resultado = a + b;
			printf("%.2f %c %.2f = ", a, operador, b);
			printf("Resultado = %.2f",resultado);
			break;
		case '-':
			resultado = a - b;
			printf("%.2f %c %.2f = ", a, operador, b);
			printf("Resultado = %.2f",resultado);
			break;
		case '/':
			if(a!=0 && b !=0){
			resultado = a / b;
			printf("%.2f %c %.2f = ", a, operador, b);
			printf("Resultado = %.2f",resultado);
			} else{
				printf("Espirito de porco tentando dividir por zero");
			}
			break;
		case '*':
			resultado = a * b;
			printf("%.2f %c %.2f = ", a, operador, b);
			printf("Resultado = %.2sf",resultado);
			break;
		default:
			printf("Operacao nao existe");
	}
	
	return 0;
	
	
}
