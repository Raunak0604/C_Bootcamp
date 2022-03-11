#include <stdio.h>
#include <string.h>

typedef struct bankAccount {
    int code;
    char name[20];
    float money;   
}bank;

int main(){

    bank a1;

    a1.code = 101;
    strcpy (a1.name, "Rabbit");
    a1.money = 500000.568;

    printf("The customer code is %d \n" , a1.code);
    printf("The customer name is %s \n" , a1.name);
    printf("The customer money is %.2f \n" , a1.money);
        
    return 0;
}