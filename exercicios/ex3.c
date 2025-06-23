#include <stdio.h>

int main(){
	int tempoEmMinutos ;
	printf("Digite o tempo em minutos\n");
	scanf("%d",&tempoEmMinutos);
	
	int horas = tempoEmMinutos / 60;
	int minutosQueSobram = tempoEmMinutos % 60;

	
	printf("\n ===========RESULTADO========\n\n");
	printf("Tempo convertido: %d horas  e %d minutos",horas,minutosQueSobram);
	
	return 0;
	
}
