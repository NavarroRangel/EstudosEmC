#include <stdio.h>
int contadorDeVogais(char texto[100]){
	int vogais = 0;
	for (int i = 0; texto[i] != '\0'; i++){
		if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ){
			vogais++;
		}

	}
		return vogais;
}



int main(){
	
	char texto[100];
	printf("Digite uma palavra:\n");
	scanf("%s", texto);
	
	printf("Quantidade de vogais: %d", contadorDeVogais(texto));
	
	return 0;
}
