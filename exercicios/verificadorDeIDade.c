#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char idade[] = "25";
	
	int idadeConvertida = atoi(idade);
	
	if (idadeConvertida >= 18){
		printf("Pode entrar! \n");
	} else{
		printf("BARRADO! \n");
	}
	
	return 0;
}
