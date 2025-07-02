#include <stdio.h>
#include <stdlib.h>

int main(){
	char temperatura[] = "25.2";
	float temperaturaConvertida = atof(temperatura);
	if (temperaturaConvertida < 18){
		printf("TA FRIO!");
	} else if(temperaturaConvertida >= 18 && temperaturaConvertida <= 26){
		printf("Agradavel!");
	} else{
		printf("QUENTE!");
	}
	
	
	return 0;
}

