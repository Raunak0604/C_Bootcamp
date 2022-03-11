#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){

    struct employee e1 , *ptr;
    ptr = &e1;

    ptr->code = 105;
    ptr->salary = 5000.56;
    strcpy (ptr->name, "Rabbit");

    printf("The employee Code is %d \n" , ptr->code);
    printf("The employee salary is %f \n" , ptr->salary);
    printf("The employee Name is %s \n" , ptr->name);

    return 0;
}