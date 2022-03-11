#include <stdio.h>
#include <stdarg.h>

int sum (int num,...){

    int sum = 0;
    va_list ptr;
    va_start (ptr, num);

    for(int i = 0; i < num; i++){
        int n = va_arg (ptr, int);
        sum = sum + n;
    }
    va_end (ptr);
    return sum;
}


int main(){
    
    printf("The sum of 5 number is %d \n" , sum(5, 1, 2, 3, 4, 5));
    
    return 0;
}