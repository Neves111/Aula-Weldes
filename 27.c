#include <stdio.h>
#include <math.h>

int main(void) {
    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);

    if((a + b +c)/3 >= 7) {
        printf("aprovado\n");
    }else {
        printf("reprovado\n");
    }


    return 0;
}
