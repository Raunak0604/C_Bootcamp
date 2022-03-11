#include <stdio.h>

int main(){
    
    int a = 585 , b , c ;

    // a = b = c; (note : not execute)

    b = c = a;
    printf ("The value of a & b & c is %d %d %d \n" , a , b , c );

    float x = 5.25;
    float y = 4.75 + x ;

    // float y = 4.75 + x ;
    // float x = 5.25;
    //not execute//

    printf ( "value of y is %f \n" , y);
    
    return 0;
}