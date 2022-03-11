#include <stdio.h>

int main(){
    
    float celcius ;
    printf( "Enter a temperature in celcius \n");
    scanf("%f" , & celcius);

    float fahrenheit = (celcius * 9/5) + 32;

    printf( "This temperature in fahrenheit %f \n" , fahrenheit);
        
    return 0;
}