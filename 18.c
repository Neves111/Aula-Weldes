#include <stdio.h>
#include <math.h>

int main(void) {
   int a;

   scanf("%d", &a);

   if(a >= 18){
        printf("maior de idade");
   }else{
        printf("menor idade");
   }

   return 0;
}
