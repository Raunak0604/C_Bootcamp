#include <stdio.h>

int main(){
    
    int n, i;
    printf("Enter a number to print multiplication table in reversed order \n");
    scanf("%d" , &n);

    printf("Multiplication table : \n");
    for(i=10; i; i--){
        printf("%d * %d = %d \n" , i , n , (i*n));
    }
    
    return 0;
}