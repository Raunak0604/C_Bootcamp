#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[20];
}emp;

void show (emp emp1){
    printf("The code of Employee %d \n" , emp1.code);
    printf("The salary of Employee %f \n" , emp1.salary);
    printf("The name of Employee %s \n" , emp1.name);
}

int main(){
    
    // declaring e1 & ptr
    emp *ptr;
    emp e1;

    // pointing ptr to e1
    ptr = &e1;

    //set values into e1
    ptr->code = 101;
    ptr->salary =5000.656;
    strcpy (ptr->name, "Rabbit");

    //print 
    show(e1);    
       
    return 0;

}
