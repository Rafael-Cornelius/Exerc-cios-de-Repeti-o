#include <stdio.h>

int main(){
	int x = 0;
	while( x <= 10){
	printf("\n Valor de x: %d", x);
	x++;
}
x = 1;
	while(x == 0){
		printf("\n Digite o 0 para continuar ou outro numero para sair:\n");
		scanf("%d", &x);
		
	}
	x = 0;
	do{
		printf("\n Valor de x: ", x);
	x++;
}while(x <= 10);
}
