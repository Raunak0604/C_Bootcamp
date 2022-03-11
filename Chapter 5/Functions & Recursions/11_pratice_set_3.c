#include <stdio.h>
float force( float mass);

int main(){

    int m;
    printf("Enter the value of mass \n");
    scanf("%d" , &m);
    printf("Force of attraction is : %.3f \n" , force(m));
    
    return 0;
}

float force (float mass){
    float result = mass * 9.8;
    return result;
}