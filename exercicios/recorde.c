#include <stdio.h>


int main(){
	
	int score[5];
	int recorde = 5000;
	
	
	printf("Digite suas 5 pontuacoes!\n");
	for(int i = 0; i < 5; i++){
		printf("Score %d: ",i+1);
		scanf("%d", &score[i]);
			if(score[i] > recorde){
				printf("Parabens! Score: %d superou o recorde!\n",score[i]);
				recorde = score[i];
		}
	}
	
	return 0;
}
