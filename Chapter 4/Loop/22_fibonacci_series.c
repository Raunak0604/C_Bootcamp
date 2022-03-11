#include <stdio.h>

int main(){
    
    int a=0, b=1, c, n, i, fibo;
    printf( "How many fibonacci number you want to print \n");
    scanf("%d" , &n);

    printf("Fibonacci Series : \n%d  \n%d \n" , a,b);
    for(i=2; i<n; i++){
        c= a + b;
        printf("%d \n" , c);
        a=b;
        b=c;
    }

    return 0;
}