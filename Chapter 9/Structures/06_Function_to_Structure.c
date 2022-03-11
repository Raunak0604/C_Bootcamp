#include <stdio.h>
#include <string.h>

struct employee {
    int code;
    float salary;
    char name[20];

};

void show (struct employee emp){
    printf("The code of Employee %d \n" , emp.code);
    printf("The salary of Employee %f \n" , emp.salary);
    printf("The name of Employee %s \n" , emp.name);
    emp.code = 34;
}

int main(){
    
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    ptr->code = 101;
    ptr->salary = 4000.586;
    strcpy (ptr->name, "Rabbit");

    show(e1);
    printf("The code of Employee %d \n" , ptr->code);

    return 0;
}