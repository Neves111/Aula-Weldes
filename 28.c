#include <stdio.h>
#include <math.h>

int main(void) {
    int a;

    scanf("%d",&a);

    if(a % 3 == 0 && a % 5 == 0) {
        printf("divisivel por 5 e 3 ao mesmo tempo");
    }else {
        printf("nao divisivel por 5 e 3 ao mesmo tempo");
    }



    return 0;
}
