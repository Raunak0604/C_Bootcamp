#include <stdio.h>

int main(){
    
    int i = 1, n, fact=1 ;
    printf("Enter which number of factorial you want to print \n");
    scanf("%d" , &n);

    while(i <= n){
      fact *= i;
      i++; 
    }

    printf("Factorial : %d \n", fact);

    return 0;
}