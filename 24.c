#include <stdio.h>
#include <math.h>

int main(void) {

    float a;

    scanf("%f", &a);

    if(a <= 1500) {
        printf("%.2f", a*1.10);
    }else {
        printf("%.2f", a*1.05);
    }

    return 0;
}
