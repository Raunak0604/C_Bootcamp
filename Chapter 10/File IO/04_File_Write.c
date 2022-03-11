#include <stdio.h>

int main(){
    
    FILE *ptr;
    int num = 100;

    ptr = fopen("generated.txt" , "w");
    fprintf (ptr, "The number is %d \n", num);
    fprintf (ptr, "Thank You \n");
    fclose(ptr);

    return 0;
}
