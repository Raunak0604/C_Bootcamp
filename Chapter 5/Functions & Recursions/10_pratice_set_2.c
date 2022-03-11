#include <stdio.h>
float temp ( int cel);

int main(){

    int c;
    printf("Enter temperature in celsius \n");
    scanf("%d" , &c);
    printf("Temperature in fahrenheit %f \n" , temp(c)) ;
    
    return 0;
}

float temp ( int cel){
    float f = ( cel * 1.8) +32 ;
    return f;

}