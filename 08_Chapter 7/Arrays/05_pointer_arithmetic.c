#include <stdio.h>

int main()
{

    int i = 35;
    int *ptr = &i;

    printf("The address of i is %u \n", ptr);
    // ptr++;
    // ptr++;
    ptr = ptr + 1;
    printf("The address of i is %u \n", ptr);

    char x = 'a';
    char *y = &x;

    printf("The address of x is %u \n", y);
    // ptr--;
    // ptr--;
    y = y - 1;
    printf("The address of x is %u \n", y);

    float f = 3.4;
    float *f_ptr = &f;
    printf("The value of ptr is %u\n", f_ptr);
    // f_ptr = f_ptr - 1;
    f_ptr = f_ptr + 1;
    // f_ptr = f_ptr + 1;
    // f_ptr++;
    // f_ptr++;
    printf("The value of ptr is %u\n", f_ptr);

    return 0;
}