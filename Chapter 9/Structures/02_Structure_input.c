// ==>> Write a c program to store the details of 3 employees from user
//      difined data. use the structure declared above.

#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    char name[20];
    float salary;  
};


int main(){

    struct employee e1, e2, e3;

    printf("Enter the code of e1 employee \n");
    scanf("%d" , &e1.code);
    printf("Enter the name of e1 employee \n");
    scanf("%s" , e1.name);
    printf("Enter the salary of e1 employee \n");
    scanf("%f" , &e1.salary);

    printf("Enter the code of e2 employee \n");
    scanf("%d" , &e2.code);
    printf("Enter the name of e2 employee \n");
    scanf("%s" , e2.name);
    printf("Enter the salary of e2 employee \n");
    scanf("%f" , &e2.salary);

    printf("Enter the code of e3 employee \n");
    scanf("%d" , &e3.code);
    printf("Enter the name of e3 employee \n");
    scanf("%s" , e3.name);
    printf("Enter the salary of e3 employee \n");
    scanf("%f" , &e3.salary);
    

    return 0;
}