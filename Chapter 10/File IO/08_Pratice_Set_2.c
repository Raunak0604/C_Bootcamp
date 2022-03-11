#include <stdio.h>

int main(){
    
    FILE *ptr;
    ptr = fopen("table.txt" , "w");

    int num = 5;
    printf("Enter a number which you want to print multiplication table \n");
    scanf("%d", &num);

    fprintf(ptr, "Multiplication table of %d \n" , num);
    for(int i = 1 ; i <= 10 ; i++){
        fprintf( ptr, "%d * %d = %d \n" , num, i, (num * i));
    }

    fclose(ptr);

    return 0;
}