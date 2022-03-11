#include <stdio.h>

int main(){
    
    int i = 0, j;
    do{
        printf("In while loop %d \n" , i);
        i++;
        if(i==5) {
            break;
        }
    }while(i < 10);

     for (j=0; j < 10; j++){
         printf("In for loop %d \n" , j);
         if(j == 7){
             break;
         }
     }   

    return 0;
}