#include <stdio.h>

int main(){
    
    int n, i = 2, prime = 1;
    printf("Enter a number to check it's prime or not \n");
    scanf("%d" , &n);

    while(i<n){
        if(n % i == 0){
            prime = 0;
            break;
        }
        i++;
    }

    if(prime==0){
        printf("This is not a prime number \n");
    }
    else{
        printf("This is a prime number \n");
    }

    return 0;
}