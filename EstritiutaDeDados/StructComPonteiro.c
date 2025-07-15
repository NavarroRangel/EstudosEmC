#include <stdio.h>

struct Pessoa{
	char nome[50];
	int idade;
	float altura;
	
};

int main(){
	
	struct Pessoa p1;
	struct Pessoa *ponteiro = &p1;
	
	printf("Digite o nome: ");
	scanf("%s", ponteiro->nome);
	
	printf("Digite a idade: ");
	scanf("%d", &ponteiro->idade);
	
	printf("Digite a altura: ");
	scanf("%f", &ponteiro->altura);
	
	printf("Nome: %s \n",ponteiro->nome);
	printf("Idade: %d \n",ponteiro->idade);
	printf("Altura: %.2f \n",ponteiro->altura);
	
	
	
	
	
	return 0;
}
