#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int *ptr;
    // Size of Operator in c 
    printf("The size of int is %d \n", sizeof(int));
    printf("The size of char is %d \n", sizeof(char));
    printf("The size of double is %d \n", sizeof(double));

    ptr = (int *) malloc ( 6 * sizeof(int));
    for(int i = 0; i < 6; i++){
        printf("Enter %d element \n", i+1);
        scanf("%d", &ptr[i]);
    }

    for(int i = 0; i < 6; i++){
        printf("The value of %d elements is %d \n", i+1, ptr[i]);
    }

    return 0;
}