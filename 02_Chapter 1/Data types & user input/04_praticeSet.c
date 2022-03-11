#include <stdio.h>

int main(){
    
    float radius;
    float pi = 3.14;
    
    printf ("write radius of the circle \n");
    scanf( "%f" , & radius);

    float area = pi * radius * radius;
    printf ("The area of the circle is %f \n" , area);

    float height;
    printf ("write radius of the circle \n");
    scanf( "%f" , & height);

    float volume = pi * height * radius * radius;
    printf ("The volume of the cylinder is %f \n" , volume);

    return 0;
}