#include <stdio.h>

void imparOuPar(int num1){
	if (num1 % 2 != 0){
		printf("Numero %d e impar!",num1);
	} else {
		printf("Numero %d e par!", num1);
	}
}

int main(){
	int num;
	
	printf("Digite um numero: \n");
	scanf("%d", &num);
	imparOuPar(num);
	
	return 0;
	
}
