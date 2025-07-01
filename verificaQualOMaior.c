#include <stdio.h>

int verificaQualMaior(int num1, int num2, int num3){
	if(num1 > num2 && num1 > num3){
		printf("numero: %d	e	o maior",num1);
		return num1;
	}else if(num2 > num1 && num2 > num3){
		printf("numero: %d e	o maior" ,num2);
		return num2;
	}else if(num3 > num1 && num3 > num2){
		printf("numero: %d e	o maior",num3);
		return num3;
	} else{
		printf("Sao iguais");
		return num1,num2,num3;
	}
	
}



int main(){
	int num1, num2, num3;
	printf("Digite 3 numero para ver qual e o maior \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	verificaQualMaior(num1,num2,num3);
	
	
	return 0;
}
