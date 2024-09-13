#include <stdio.h>

int main(void) {
   int a = 0;
   int b = 0;
   int c = 0;

   scanf("%d %d %d", &a, &b, &c);

   printf("%d", (a*2+b*3+c*5)/(2+3+5));
    return 0;
}
