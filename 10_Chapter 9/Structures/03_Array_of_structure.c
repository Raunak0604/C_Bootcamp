#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    char name[20];
    float salary;  
};

int main(){
    
    struct employee facebook[100];

    facebook[0].code = 100;
    facebook[0].salary = 5000.45;
    strcpy(facebook[0].name, "Rabbit");

    facebook[1].code = 108;
    facebook[1].salary = 6000.45;
    strcpy(facebook[1].name, "Ram");

    facebook[2].code = 101;
    facebook[2].salary = 7000.45;
    strcpy(facebook[2].name, "Turtle");


    return 0;
}