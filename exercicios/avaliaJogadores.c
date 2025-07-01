#include <stdio.h>

void avaliaJogador(int jogadores, float nota1, float nota2, float nota3){
	
	
	for(int i = 0; i < jogadores; i++){
		
		printf("Digite as notas dos jogadores entre 1 e 10\n ");
		scanf("%f %f %f", &nota1,&nota2, &nota3);
		float media = (nota1+nota2+nota3)/3;
		
		if (media >= 9){
		printf("Execelente! media %.2f", media);
	} 	else if(media >= 7 && media < 9){
			printf("Bom! media %.2f",media);
	} 	else if(media >= 5 && media < 7){
			printf("Regular! media %.2f",media);
	} 	else {
			printf("Ruim! media %.2f",media);
	}
	printf("\n\n==========================================\n\n");
	}

}


int main (){
	int jogadores;
	float nota1,nota2,nota3;
	
	printf("Digite quantos jogadores para calcular a media\n");
	scanf("%d", &jogadores);
	
	
	avaliaJogador(jogadores,nota1,nota2,nota3);
	
	return 0;
}
