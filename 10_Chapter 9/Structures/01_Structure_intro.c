#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    char name[20];
    float salary;
};


int main(){

    int a =34;
    char b = 'g';
    float d = 234.3543;
    // employee e1;
    // e1.salary = 34.454; ---> Not work without employee structure
    
    struct employee e1;
    e1.code = 101;
    //e1.name = "Rabbit";  -->> Not working
    strcpy(e1.name, "Rabbit");
    e1.salary = 50000.567;

    printf("Employee 1 code %d \n" , e1.code);
    printf("Employee 1 name %s \n" , e1.name);
    printf("Employee 1 salary %.3f \n" , e1.salary);

    return 0;
}