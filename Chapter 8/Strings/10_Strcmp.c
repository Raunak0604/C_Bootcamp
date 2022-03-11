#include <stdio.h>
#include <string.h>

int main(){
    
    char str_1[] = "Hello";
    char str_2[] ="Rabbit";
    int val = strcmp (str_1, str_2);

    printf("Now the val is %d " , val);

    return 0;
}
