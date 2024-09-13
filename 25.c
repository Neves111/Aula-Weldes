#include <stdio.h>
#include <math.h>

int main(void) {
    int a;
    int b;
    int c;

    scanf("%d %d %d",&a, &b, &c);

    if(a < b + c && b < a + c && c < a + b) {
        printf("triangulo");
    }else {
        printf("nao forma triangulo");
    }


    return 0;
}
