#include <stdio.h>

void alunoAprovadoOuNao(int nota){
	if(nota >= 6){
		printf("Aluno aprovado com nota %d",nota);
	} else if(nota >= 4 && nota < 6){
		printf("Aluno em recuperacao com nota %d", nota);
	} else {
		printf("Reprovado!");
	}
	
}


int main (){
	int media;
	printf("Digite sua media entre 1 e 10 \n");
	scanf("%d", &media);
	
	alunoAprovadoOuNao(media);
	
	return 0;
}
