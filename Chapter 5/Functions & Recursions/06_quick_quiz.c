// == >> Use the library function to calculate the area of a square with side a

#include <stdio.h>
int area (int a );

int main(){
    int c = area(8);
    printf("The area of the square is %d \n" , c);
    return 0;
}

int area (int a ){
    int b;
    b = a * a;
    return b;
}