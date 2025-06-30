#include <stdio.h>

int main(){

	
	int n;
	int par = 2;
	printf("Quantas linhas de pares vai querer?\n");
	scanf("%d", &n);
	
	for(int i = 1; i <=  n; i++ ){
		for (int j = 1; j <= i ; j++ ){
			printf("%d ", par);
			par = par + 2;
			
			
		}
		printf("\n");
	}
	
	
	return 0;
}
