#include <stdio.h>

int main() {
    float altura;
    float maior = 0;
    
    for(int i = 1; i <= 6; i++) {
        printf("\nDigite a sua altura:\n");
        scanf("%f", &altura);
        
        if(altura > maior) {
            maior = altura;
        }
    }
    
    printf("\nA maior altura e: %.2f\n", maior);
    return 0;
}
