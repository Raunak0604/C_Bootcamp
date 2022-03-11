#include <stdio.h>

int main(){
    
    int i, n, sum =0;
    printf("Enter the number of multiplication table which you want to print \n");
    scanf("%d" , &n );

    printf("Multiplication table :\n");
    for(i=1; i<=10; i++){
        printf("%d * %d = %d \n" , n, i, i * n);
        sum += i*n;          
    }
    
    printf("Sum of multiplication table %d \n", sum);

    return 0;
}