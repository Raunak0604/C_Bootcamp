#include <stdio.h>
void sumAndAvg (int a, int b, int *sum , float *avg){
    *sum = a + b ;
    *avg = (float)*sum / 2;
}

int main(){

    int x, y, s ;
    float a;
    x = 5;
    y = 4;

    sumAndAvg(x, y, &s, &a);
    printf("The sum of x & y is %d \n", s);
    printf("The Average of x & y is %f \n", a);
    
    return 0;
}