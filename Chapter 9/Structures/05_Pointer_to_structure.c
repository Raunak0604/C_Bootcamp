#include <stdio.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    
    struct employee *ptr;
    struct employee e1;

    ptr = &e1;
    //(*ptr).code = 101; // or You can also write: ptr->code = 101;
    ptr->code = 101;
    printf("%d", e1.code);
       
    return 0;
}
