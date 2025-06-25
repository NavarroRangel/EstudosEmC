#include <stdio.h>

int main (){
	int opcao;
	int notaFinal;
	int frequencia;
	
	printf("1.Verificar se o aluno foi aprovado!\n");
	printf("2.Sair\n");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
			printf("Digite a nota final (0 a 10)! e a frequencia de presenca (0 a 100)!\n");
			scanf("%d %d",&notaFinal,&frequencia);
			printf("%d, %d", notaFinal,frequencia);
			if(notaFinal >= 7 && frequencia >= 75){
				printf("Aprovado!");
			} else{
				printf("Bailou!");
			}
			break;
		default:
			printf("Encerrando Programa");
			
	}
	return 0;
}
