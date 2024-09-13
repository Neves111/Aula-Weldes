#include <stdio.h>
#include <math.h>

int main(void) {
   int a;

   scanf("%d", &a);

   if(a > 0){
        printf("positivo");
   }else if (a < 0){
        printf("negativo");
   }else{
        printf("igual zero");
   }

   return 0;
}
