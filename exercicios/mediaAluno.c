#include <stdio.h>


int main(){
	float notas[3][4];
	float notasSomadas;
	float media;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			printf("Aluno %d, prova %d: ",i+1,j+1);
			scanf("%f", &notas[i][j]);
			printf("\n");
		}
	}
	for(int i = 0; i < 3; i++){
		// Agora, ao colocar notasSomadas = 0; dentro do loop que itera sobre os alunos 
		//(for(int i = 0; i < 3; i++)), é como se você estivesse pegando um balde novo e vazio para 
		//cada aluno. Assim, a soma começa do zero para cada um, resultando na média correta.
		//EXPLICACAO QUE AJUDOU A RESOLVER O BUG DE NOTAS SOMADAS ARMAZENAR	
		notasSomadas = 0;
		for(int j = 0; j < 4; j++){
		notasSomadas += notas[i][j];
		}
		media = notasSomadas / 4;
		printf("A media das notas do aluno %d foi : %.2f",i+1,media);
		printf("\n");
	}	
	
	
	return 0;
}
