#include <stdio.h>

int main(){
    
    float principal, time, rate;

    printf( "Enter your amount \n");
    scanf ("%f" , & principal);

    printf( "Enter your rate of interest \n");
    scanf ("%f" , & rate);

    printf( "Enter the time \n");
    scanf ("%f" , & time);

    float simpleInterest = ( principal * rate * time) / 100;
    printf ("Simple interest is %f \n" , simpleInterest);


    return 0;
}