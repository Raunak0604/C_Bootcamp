#include <stdio.h>
void display();  // ==>> Function Prototype

// ==>> Function Call

int main(){
    printf("Enter You name \n");
    display();
    printf("Thank you \n");
    return 0;
}

// ==>> Function Definition

void display(){
    printf("Hello I am rabbit \n");
}
