#include <stdio.h>
#include <math.h>

int main(void) {
   float a;
   float b;
   float c;


   scanf("%f %f %f", &a, &b, &c);

   float aux = (b/100);

   printf("%.2f", a+(a*aux*c));

   return 0;
}
