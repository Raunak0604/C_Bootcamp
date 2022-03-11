#include <stdio.h>

int main(){
    
    int arr[10], n;

    printf("Enter a number which number do you want to print multiplication table \n");
    scanf ("%d" , &n);

    printf("Multiplication table : \n");
    for(int i = 0; i < 10; i++){
        arr[i] = n * (i+ 1);
        printf("%d * %d = %d \n" , n, i+1, arr[i]);
    }

    return 0;
}