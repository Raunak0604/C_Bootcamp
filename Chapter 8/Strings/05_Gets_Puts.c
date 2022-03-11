#include <stdio.h>

int main(){
    
    char s[100];

    printf("Enter Your Name : ");
    gets(s);
    puts(s);
    printf("My name is : %s", s);

    return 0;
}