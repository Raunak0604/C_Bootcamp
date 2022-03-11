#include <stdio.h>

int main(){
    
    char str[] = "Hello I am Rabbit \n";
    printf("%s", str);

    // ==>> declared String Using Pointer 
    char *ptr = "Hello I am Rabbit \n";
    printf("%s", ptr);

    return 0;
}