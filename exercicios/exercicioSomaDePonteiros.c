#include <stdio.h>

int soma(int *a,int *b){
	return *a + *b;
}

int main(){
	int a,b;
	printf("Digite o valor de A : \n");
	scanf("%d", &a);
	printf("Digite o valor de B : \n");
	scanf("%d", &b);
	printf("Soma: %d \n", soma(&a,&b));
	
	
	
	return 0;
}
