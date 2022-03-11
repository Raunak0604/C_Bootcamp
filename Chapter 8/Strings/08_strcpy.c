#include <stdio.h>
#include <string.h>

int main(){
    
    char *str_1 = "Rabbit";
    char str_2[45];
    strcpy (str_2, str_1);

    printf("Now str_2 is %s " , str_2);

    return 0;
}