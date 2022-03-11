#include <stdio.h>

int main(){
    
    FILE *ptr;
    int num, s;

    ptr = fopen("problem5.txt" , "r");
    fscanf(ptr, "%d", &num);

    ptr = fopen("problem5.txt" , "w");
    s = num * 2;
    fprintf(ptr, "The double value is %d \n", s); 

    return 0;
}