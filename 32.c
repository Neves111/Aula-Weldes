#include <stdio.h>
#include <math.h>

int main(void){

    int a;
    int i;
    int soma;

    scanf("%d",&a);

    for(i = 0; i <= a; i++) {
        soma += i;
    }

    printf("%d",soma);

    return 0;
}
