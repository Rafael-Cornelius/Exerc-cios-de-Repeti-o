#include <stdio.h>

int main(){
	float nota1, nota2, media;
	
	do{
		printf("\n Digite a 1a nota: ");
		scanf("%f", &nota1);
		
		if(nota1 < 0 || nota1 > 10){
			printf("\n Valor invalido! A nota deve estar entre 0 e 10. \n ");
		}
	}while( nota1 < 0 || nota1 > 10);
	do {
			printf("\n Digite a 2a nota: ");
			scanf("%f", &nota2);
			
			if(nota2 < 0 || nota2 > 10){
				printf("\n Valor invalido! a nota deve estar entre 0 e 10 \n ");
			}
			}while( nota2 < 0 || nota2 > 10);
			
			media = (nota1 + nota2) /2;
			printf("\n A sua media e: %.2f ", media);
		}

		
