#include <stdio.h>
 int main(){
 	int opcao;
 	do{ 
 	printf("\n 1 - SAUDAÇÃO");
 	printf("\n 2 - BRONCA");
 	printf("\n 3 - FELICITAÇÃO");
	printf("\n 4 - FIM");
		printf("\n Escolha uma opção: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("\n Ola, como vai?");
				break;
			case 2:
				printf("\n Vamos estudar mais. ");
				break;
			case 3:
				printf("\n Meus Parabens! ");
				break;
			case 4:
				printf("\n fim de serviço");
				break;
			default:
				printf("\n opção invalida, tente novamente!");
				break;
			}
	}	while( opcao != 0);
		
		return 0;
	 }
 
