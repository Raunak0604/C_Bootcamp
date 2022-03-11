#include <stdio.h>
#include <string.h>

int main(){
    
    char str_1[] = "Hello";
    char str_2[] ="Rabbit";
    strcat (str_1, str_2);

    printf("Now the str_1 is %s " , str_1);

    return 0;
}