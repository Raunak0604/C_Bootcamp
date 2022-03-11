#include <stdio.h>
struct employee {
    int code;
    float salary;
    char name[20];
};

int main(){

    struct employee rabbit = {101, 5000.56, "Rabbit"};
    printf("Code : %d \n" ,rabbit.code);
    printf("Salary : %f \n" ,rabbit.salary);
    printf("Name : %s \n" ,rabbit.name);

    return 0;

}
