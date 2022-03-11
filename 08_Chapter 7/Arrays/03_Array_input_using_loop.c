#include <stdio.h>

int main(){

    int marks[5], i;

    for(i=0; i<5; i++){
        printf("The marks of student %d is : " , i + 1);
        scanf("%d" , &marks[i]);
    }
    
    printf("The marks of five students is : ");
    for(i=0; i<5; i++){
        printf("%d ", marks[i]);
    }

    return 0;
}