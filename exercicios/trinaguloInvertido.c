#include <stdio.h>

int main(){
	
	int n ;
	
	printf("Digite o N do triangulo Invertido \n");
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++ ){
		for(int j = n; j >= i; j--){
			printf("%d ", j);
		}
		printf("\n");
	}
	
	
	return 0;
}
