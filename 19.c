#include <stdio.h>
#include <math.h>

int main(void) {
   int a;
   int b;
   scanf("%d %d", &a, &b);

   if(a > b){
        printf("%d eh maior", a);
   }else if (a < b){
        printf("%d eh maior", b);
   }else{
        printf("sao iguais");
   }

   return 0;
}
