// ==>> Create a 2D array by taking input from the user.

#include <stdio.h>

int main(){
    
    int arr [3] [4];

    for(int i = 0; i <3; i++){
        for(int j = 0; j < 4; j++){
            printf("2D array element [%d] [%d] : " , i, j);
            scanf("%d" , &arr[i] [j]);
        }
    }

    printf("2D array is : \n");
    for(int i = 0; i <3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d  " , arr[i] [j]);
            if(j==3){
                printf("\n");
            }
        }
    }
    

    return 0;
}