#include <stdio.h>
#include <math.h>

int main(void) {
    float a;
    int c;

    scanf("%f", &a);

    scanf("%d", &c);

    switch (c) {
        case 1:
            printf("%.2f\n", (72.7*a)-58);
            break;
        case 2:
            printf("%.2f\n", (62.1*a)-44.7);
            break;
        default:
            printf("Error");
    }


    return 0;
}
