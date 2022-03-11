#include <stdio.h>
int printArray (int *ptr, int n){
    for(int i = 0; i < n; i++){
        printf("The marks of Student %d is %d \n" , i+1, *(ptr+i));
    }
}

int array (int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("The marks of student %d is %d \n" , i+1, arr[i]);
    }
    arr[2] = 5555; // This value will be changes in arr array of main as well
}


int main(){

    int marks[]= {22, 33, 44, 55, 66, 77, 88};
    //printArray( marks, 7);
    array(marks, 7);
    printf("xyz %d \n" , marks[2]);

    return 0;
}