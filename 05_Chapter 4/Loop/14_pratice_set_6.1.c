#include <stdio.h>

int main(){
    
    int i, n, sum = 0;
    printf ("Enter how many natural number you want to print \n" );
    scanf("%d" , &n);

    for(i=1; i <= n; i++){
        sum += i;
    }
    printf("sum of (1 to %d) natural number %d " , n, sum);

    return 0;
}