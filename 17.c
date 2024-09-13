#include <stdio.h>
#include <math.h>

int main(void) {
   float a;

   scanf("%f", &a);

   if(a <= 200){
        printf("%.2f", a);
   }else if(a > 2000 && a <= 3000){
        printf("%.2f", a - (a*10/100));
   }else if(a > 3000 && a <= 5000){
        printf("%.2f", a - (a*15/100));
   }else if(a > 5000){
        printf("%.2f", a - (a*20/100));
   }

   return 0;
}
