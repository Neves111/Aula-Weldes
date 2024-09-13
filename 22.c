#include <stdio.h>
#include <math.h>

int main(void) {
   int a;

   scanf("%d", &a);

   if(a % 4 == 0) {
        printf("bissexto");
   }else{
        printf("nao bissexto");
   }

   return 0;
}
