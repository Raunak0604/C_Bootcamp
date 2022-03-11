#include <stdio.h>

int main(){

    int i = 72;
    int *j = &i;
    //int **k = &j;
    
    printf("The value of i %d \n" , i);
    printf("The value of i %d \n" , *j);

    printf("The address of i %u \n" , &i);
    printf("The address of i %u \n" , j);

    printf("The address of j %u \n" , &j);
    printf("The value of j %u \n" , *(&j));

    //printf("The value of k %u \n" , *(&k));
    //printf("The value of k %u \n" , &k);

    return 0;
}