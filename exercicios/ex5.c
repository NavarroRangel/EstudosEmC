#include <stdio.h>

int main (){
	
	float maiorSalario,menorSalario;
	
	printf("Digite o maior salario!\n");
	scanf("%f",&maiorSalario);
	printf("Digite o menor salario!\n");
	scanf("%f", &menorSalario);
	
	float salariosSubtraidos = maiorSalario - menorSalario;
	printf("A diferenca entre os salario de: R$ %.2f", salariosSubtraidos );
	
	return 0;
}
