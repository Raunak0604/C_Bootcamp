#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int *ptr, *ptr2;

    ptr = (int *) malloc ( 600 * sizeof(int));

    for(int i = 0; i < 600; i++){
        ptr2 = malloc(600000 * sizeof(int));
        printf("Enter %d element \n", i+1);
        scanf("%d", &ptr[i]);
        free(ptr2);
    }

    for(int i = 0; i < 6; i++){
        printf("The value of %d elements is %d \n", i+1, ptr[i]);
    }

    free(ptr);

    return 0;
}