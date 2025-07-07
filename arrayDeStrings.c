#include <stdio.h>


int main (){
	
	char xablau[3][20] = {"xabalu","robson","jose"};
	
	for(int i =0; i < 3; i++){
		 
		 printf("%s \n", xablau[i]);
		 // Epegar a primeira letra de cada!
		 printf("%c \n", xablau[i][0]);
		
	}
	printf("\n\n");
	
	printf("%s", xablau[0]);
	
	
	
	return 0;
}
