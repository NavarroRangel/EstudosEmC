#include <stdio.h>


void geradorDeQuadrados(int nlados,char caracter[2]){
		for(int i = 0; i < nlados; i++){
		for (int j = 0; j < nlados ; j++){
			printf("%s", caracter);
		}
		printf("\n");
	}
}

int main(){
	int n;
	char simbolo[2];
	printf("Digite quanto vai ser o lado do quadrado\n");
	scanf("%d",&n);
	
	printf("Digite um caracter para desenhar o quadrado \n");
	scanf("%s", simbolo);
	
	geradorDeQuadrados(n,simbolo);

	return 0;
}
	
	

