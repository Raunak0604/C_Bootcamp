#include <stdio.h>
int sum (int a , int b);

int main(){

    int x=5 , y=6;
    printf("The sum of 5 + 6 is %d \n ", sum(x, y));
    
    return 0;
}

int sum (int a , int b){
    int c;
    c = a + b;
    a=45;
    b=546;
    return c;

}