#include <stdio.h>
int factorial (int f);

int main(){

    int a = 5;
    printf("The value of %d factorial is %d", a ,factorial(a));

    return 0;
}

int factorial (int f){
    if(f==1 || f==0){
        return 1;
    }
    else{
        return f * factorial(f -1);
    }
}