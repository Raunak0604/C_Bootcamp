#include <stdio.h>

int main()
{
    char str[] = "Hello I am Rabbit \n";
    //str = "Raunak Mondal";
    printf("%s", str);

    // ==>> declared String Using Pointer
    char *ptr = "Hello I am Rabbit \n";
    ptr = "Raunak Mondal";
    printf("%s", ptr);

    return 0;
}