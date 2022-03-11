#include <stdio.h>

int main(){
    
    int n, i, fact = 1;
    printf("Enter which number of factorial you want to print \n");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        fact *= i;
    }

    printf("factorial : %d \n" , fact);

    return 0;
}