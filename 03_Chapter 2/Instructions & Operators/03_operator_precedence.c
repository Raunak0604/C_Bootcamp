#include <stdio.h>

int main()
{
    int x =2;
    int y =3;

    printf ("The value of 3x + 8y = %d \n ", 3*x - 8*y);
    printf ("The value of 3x / 8y = %d \n ", (8 * y) / (3 * x)); 

    // 8 * y / 3 * x is wrong
    // 24/3*2
    // 8*2
    // 16
    
    //1st -> *, /, %
    //2nd -> +, -
    //3rd -> = 

    // follow left to rigth

    int v = 3 ^ 3 ; //wrong
    printf ("%d \n", v); 

    return 0;
}