#include <stdio.h>

int main(){

    int a = 6;
    printf("The address of a is %u \n" , &a);

    int *x = &a;
    printf("The address of a is %u \n" , x);
    printf("The value of a is %u \n" , *x);


    return 0;
}