// == >> Use the math.h library function to calculate the area of a square with side a

#include <stdio.h>
#include <math.h>

int main(){
    
    int side;
    printf("Enter the value of area \n");
    scanf("%d" , &side);
    printf("The value of area of the square is %f", pow (side, 2));

    return 0;
}