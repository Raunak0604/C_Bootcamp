//==>> Write a program to print first n natural number using do-while loop

#include <stdio.h>

int main(){
    
    int a = 1;
    int n;
    printf ("Enter how many number do you want to print \n");
    scanf ("%d" , &n);

    printf("natural number list is : \n");
    do {
        printf("%d \n", a);
        a++;
    }while(a <= n);

    return 0;
}