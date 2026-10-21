#include <stdio.h>

int main(){
int pares = 0;
int impares = 0;
int numeros;
	for(int i = 1; i <= 5; i++){
		printf("\n valor de i : %i", i );
		
		if(( i %5)==0){
			pares++;
		}else{
			impares++;
			
		printf("\nTotal de números pares: %i\n", pares);
    printf("Total de números ímpares: %i\n", impares);
			
		}
		}
	}

