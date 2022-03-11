#include <stdio.h>

int main(){
    
    int arr[10] = {11,22,33,44,55,66,77,88,99,111};
    int *ptr;
    ptr = &arr[0];

    printf("The value of (ptr + 2) is %d \n", *(ptr + 2));

    if(ptr+2==&arr[2]){
        printf("These is point to same location in memory \n");
    }
    else{
        printf("These do not point to same location in memory \n");
    }

    return 0;
}