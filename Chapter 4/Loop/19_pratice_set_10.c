#include <stdio.h>

int main(){
    
    int n, i, prime = 1;
    printf("Enter a number to check it's prime or not \n");
    scanf("%d" , &n);

    for(i=2; i < n; i++){
        if(n%i==0){
            prime = 0;
            break;
        }
        
    } 

    if (prime ==0){
        printf("This is not a prime mumber \n");
        
    }
     
    else{
        printf("This is prime number \n");
    }  

    return 0;
}