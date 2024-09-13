#include <stdio.h>


int main (void){

    int a;
    int aux1 = 0;


    scanf("%d",&a);


    for(int i = 1; i <= a; i++) {
        if(a % i == 0){
            aux1++;
        }
    }
    if(aux1 == 2){
        printf("primo");
    }else{
        printf("nao primo");
    }

    return 0;
}
