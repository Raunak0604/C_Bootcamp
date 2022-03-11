//==>> Write a program to print n natural numbers in reverse order

#include <stdio.h>

int main(){
    
    int n, i;
    printf ("How many natural number do you want to print \n");
    scanf("%d", &n);

    printf("Natural number list in reverse order \n");
    for(i = n; i ; i--){
        printf("%d \n", i);
    }

    return 0;
}