#include <stdio.h>

int main(){
    
    int n, i =2, prime = 1;
    printf("Enter a number to check prime or not \n");
    scanf("%d" , &n);

    do{
        if(n%i == 0){
            prime=0;
            break;
        }
        i++;
    }while(i < n);

    if(prime == 0 && n != 2){
        printf("This is not a prime number");
    }
    else{
        printf("This is a prime number");
    }

    return 0;
}