//==>> Write a program to print first n Natural number using for loop

#include <stdio.h>

int main(){
    
    int n , i;
    printf("Enter how many number do you want to print \n");
    scanf("%d" , &n);

    printf("Natural number list : \n");
    for(i=1; i<=n; i++){
        printf("%d \n" , i);
    }
    
    return 0;
}
