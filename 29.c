#include <stdio.h>
#include <math.h>

int main(void) {
    int a;

    scanf("%d",&a);

   switch(a) {
       case 1:
           printf("domingo");
           break;
       case 2:
           printf("segunda");
           break;
       case 3:
           printf("terca");
           break;
       case 4:
           printf("quarta");
           break;
       case 5:
           printf("quinta");
           break;
       case 6:
           printf("sexta");
           break;
       case 7:
           printf("sabado");
           break;
       default:
           printf("invalido");
   }



    return 0;
}
