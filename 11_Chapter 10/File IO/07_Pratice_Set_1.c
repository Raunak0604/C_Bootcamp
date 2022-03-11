#include <stdio.h>

int main(){
    
    FILE *ptr;
    int num1, num2, num3;

    ptr = fopen("Sample.txt" , "r");
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    printf("The three integers are %d, %d, %d" , num1, num2, num3);

    return 0;
}
 