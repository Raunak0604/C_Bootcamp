// == >> Following operation can be performed on a pointers :
// 1) Addition of a number to a pointer.
// 2) Subtraction of a number from a pointer.
// 3) Subtraction of one pointer from another.
// 4) comperison of two pointer veriable.

#include <stdio.h>

int main()
{

    int i = 20, x;
    int *ptr = &i;
    int *ptr_1 = &i;

    printf("The address of i is %u \n", ptr);
    printf("The address of i is %u \n", ptr_1);

    // 1) Addition of a number to a pointer.
    ptr++;
    printf("The address of i is %u \n", ptr);

    // 2) Subtraction of a number from a pointer.
    ptr--;
    printf("The address of i is %u \n", ptr);

    // 3) Subtraction of one pointer from another.
    ptr = ptr + 5; // first incrementing ptr by 5
    x = ptr - ptr_1;
    printf("The address of i is %d \n", x);

    // 4) comperison of two pointer veriable.
    int a=10, b=15;
    int *p1 , *p2;
    p1 = &a;
    p2 = &b;

    printf("The address of i is %d \n", *p1);
    printf("The address of i is %d \n", *p2);

    if (*p1 > *p2){
        printf("P1 is greater than p2");
    }
    else{
        printf("P2 is greater than p1");
    }

    return 0;
}