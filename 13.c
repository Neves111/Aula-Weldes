#include <stdio.h>
#include <math.h>

int main(void) {
   float a;
   float b;

   scanf("%f %f", &a, &b);

   printf("%.2f", a*(b/100));

   return 0;
}
