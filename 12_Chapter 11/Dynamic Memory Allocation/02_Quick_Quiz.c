// -->> Write a program to create a dynamic array of
//      5 float using malloc().

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float *ptr;
   
    ptr = (float *) malloc ( 5 * sizeof(int));
    for(int i = 0; i < 5; i++){
        printf("Enter %d element \n", i+1);
        scanf("%f", &ptr[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("The value of %d elements is %f \n", i+1, ptr[i]);
    }

    return 0;
}
