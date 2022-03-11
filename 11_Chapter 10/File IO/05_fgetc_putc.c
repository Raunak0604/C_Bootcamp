#include <stdio.h>

int main(){
    
    FILE *ptr;
    ptr = fopen("getcdemo.txt" , "r");

    //char c = fgetc(ptr);
    printf ("The value of my character is %c \n" ,fgetc(ptr));
    printf ("The value of my character is %c \n" ,fgetc(ptr));
    printf ("The value of my character is %c \n" ,fgetc(ptr));
    printf ("The value of my character is %c \n" ,fgetc(ptr));
    printf ("The value of my character is %c \n" ,fgetc(ptr));
    printf ("The value of my character is %c \n" ,fgetc(ptr));
    printf ("The value of my character is %c \n" ,fgetc(ptr));
    printf ("The value of my character is %c \n" ,fgetc(ptr));
    fclose(ptr);

    FILE *ptr2;
    ptr2 = fopen("putcdemo.txt" , "w");
    fputc('R', ptr2);
    fputc('a', ptr2);
    fputc('b', ptr2);
    fputc('b', ptr2);
    fputc('i', ptr2);
    fputc('t', ptr2); 
    
    return 0;
}