#include <stdio.h>

int main(){
    
    int mul [10] ;

    for(int i=0; i<10; i++){
        mul [i] = 5 * (i + 1);
        printf("The multiplication table is 5 * %d = %d \n" , i+1 , mul[i] );
    }

    return 0;
}