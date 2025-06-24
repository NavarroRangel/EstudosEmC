#include <stdio.h>

int main (){
	int capacidadeDoEstadio, quantidadeTorcedores;
	
	printf("Qual a capacidade do estadio? \n");
	scanf("%d", &capacidadeDoEstadio);
	
	printf("Qual a quantidade de torcedores ? \n");
	scanf("%d", &quantidadeTorcedores);
	
	float porcentagemDeLotacao = (float)quantidadeTorcedores / capacidadeDoEstadio ;
	
	if(porcentagemDeLotacao > 1 ){
		printf("FUJA VAI CAIR");
	} else if(porcentagemDeLotacao > 0.9){
		printf("Lotado");
	} else if(porcentagemDeLotacao > 0.7 && porcentagemDeLotacao <= 0.9){
		printf("Otima presenca de publico!");
	} else if( porcentagemDeLotacao >= 0.5 && porcentagemDeLotacao <= 0.7){
		printf("Publico razoavel");
	} else{
		printf("Morumbis");
	}
	
	return 0;
}
