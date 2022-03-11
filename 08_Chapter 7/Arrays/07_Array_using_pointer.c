#include <stdio.h>

int main(){
    
    int marks[4], i;
    int *ptr;
    //ptr = &marks[0];
    ptr = marks;

    for(i=0; i<4; i++){
        printf("The marks of student %d is \n", i+1);
        scanf("%d", ptr);
        ptr++;

    }

    printf("The marks of four student is : ");
    for(i=0; i<4; i++){
        printf("%d " , marks[i]);
    }

    return 0;
}
