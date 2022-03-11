#include <stdio.h>
void tenX (int *x, int *mul);

int main(){

    int a = 5, mul;
    tenX(&a , &mul);

    printf("The value of ten time of a is %d \n" ,mul );
        
    return 0;
}
void tenX (int *x, int *mul){
    *mul = (*x )* 10;
}
