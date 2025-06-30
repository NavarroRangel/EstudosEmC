#include <stdio.h>

int main(){
	int n;
	
	printf("Digite o numero de linhas do triangulo \n");
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++){//Linhas
		for(int j = 1; j <= i; j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	return 0;
}
