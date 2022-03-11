#include <stdio.h>

int main()
{
    int marks[4];

    printf("The marks of student 1 is : ");
    scanf("%d", &marks[0]);
    printf("The marks of student 2 is : ");
    scanf("%d", &marks[1]);
    printf("The marks of student 3 is : ");
    scanf("%d", &marks[2]);
    printf("The marks of student 4 is : ");
    scanf("%d", &marks[3]);

    printf("The marks of four student is : %d, %d, %d, %d" , marks[0], marks[1], marks[2], marks[3] );

    return 0;
}