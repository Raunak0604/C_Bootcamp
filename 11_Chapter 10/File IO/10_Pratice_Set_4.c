#include <stdio.h>

int main(){
    
    FILE *ptr;
    char name1[40], name2[40];
    float salary1, salary2;
    ptr = fopen("employee.txt" , "w");

    printf("Enter the name:\n");
    scanf("%s", name1);
    fprintf(ptr, "Name  = %s\n", name1);

    printf("Enter the salary:\n");
    scanf("%f", &salary1);
    fprintf(ptr, "Salary  = %.2f\n", salary1);

    printf("Enter the name:\n");
    scanf("%s", name2);
    fprintf(ptr, "Name  = %s\n", name2);

    printf("Enter the salary:\n");
    scanf("%f", &salary2);
    fprintf(ptr, "Salary  = %.2f\n", salary2);
    fclose(ptr);

    return 0;
}