#include <stdio.h>
#include <math.h>

int main(void){

    int a;
    int fatorial = 1;

    scanf("%d",&a);

    for(int i = 1; i <= a; i++) {
        fatorial *= i;
    }
    printf("%d",fatorial);

    return 0;
}
