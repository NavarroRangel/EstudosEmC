#include <stdio.h>

	void troca(int *a, int *b){
		//Preciso de uma variavel complementar!
		// Para armazenar o valor original em outra variavel para nao perde-lo
		int temp = *a;
		*a = *b;
		*b = temp;
	}

	int main(){
		
		int x = 10, y = 20;
		
		printf("Antes da troca: x = %d, y = %d \n",x , y);
		
		troca(&x,&y);//PASSA OS ENDEEREÁOS DE X E Y
		
		printf("Depois da troca: x = %d, y = %d \n",x,y);
		
		return 0;
		
	}
