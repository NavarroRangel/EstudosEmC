#include <stdio.h>

void calculaMedia(float num1, float num2){
	float media = (num1 + num2)/2;
	printf("A media entre %f e %f = %.2f", num1,num2,media);
	
}


int main(){
	float num1, num2;
	printf("Digite 2 numeros para calcular a media \n");
	scanf("%f %f",&num1, &num2);
	
	calculaMedia(num1, num2);
	
	
	return 0;
}
