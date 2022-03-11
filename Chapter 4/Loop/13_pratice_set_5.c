#include <stdio.h>

int main(){
    
    int i=1, sum=0, n;
    printf("Enter how many natural number you want to print \n");
    scanf("%d" , &n);

    while (i <= n){
        sum= sum + i;
        i++;        
    }
    printf("Sum of (1 to %d ) natural number %d \n" ,n, sum);

    return 0;
}