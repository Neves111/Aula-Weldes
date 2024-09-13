#include <stdio.h>
#include <math.h>

int main(void) {
    int a;

    scanf("%d",&a);

    if(a >= 1 && a <= 7) {
        printf("1 semana");
    }else if(a > 7 && a <= 14) {
        printf("2 semana");
    }else if(a > 14 && a <= 21) {
        printf("3 semana");
    }else if(a > 21 && a <= 28) {
        printf("4 semana");
    }else if(a > 28 && a <= 31) {
        printf("5 semana");
    }else{
        printf("invalido");
    }



    return 0;
