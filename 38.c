#include <stdio.h>

int main (void){
    int numeros[5];
    int soma = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    printf("%d", soma/5);
    
    return 0;
}
