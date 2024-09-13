#include <stdio.h>
#include <math.h>

int main(void) {
   float a;
   float b;


   scanf("%f %f", &a, &b);

   float aux = (b/100);

   printf("%.2f", a-(a*aux));

   return 0;
}
