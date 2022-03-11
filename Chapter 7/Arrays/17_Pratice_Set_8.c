#include <stdio.h>

void printTable (int *mulTable, int n ){

    int num;
    printf("Enter a number Which you want to print multiplication table\n");
    scanf("%d" ,&num);

    printf ("Multiplication Table of %d \n" , num);

    for ( int i = 0; i<n; i++){
        mulTable [i] = num * (i + 1);
        printf("%d * %d = %d \n" , num, i+1 , mulTable[i]);
    }

    printf("******************************* \n");
}

int main(){

    int mulTable [3] [10];

    printTable (mulTable[0], 10);
    printTable (mulTable[1], 10);
    printTable (mulTable[2], 10);
    
    return 0;
}