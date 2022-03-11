#include <stdio.h>

int main(){
    
    int i=1, n, sum=0;
    printf ("Enter how many natural number you want to print \n");
    scanf("%d" , &n);

    do{
        sum += i;
        i++;
    }while (i <= n);

    printf("sum of (1 to %d) natural number %d \n", n, sum);
    

    return 0;
}