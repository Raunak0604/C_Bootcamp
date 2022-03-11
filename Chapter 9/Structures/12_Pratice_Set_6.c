#include <stdio.h>

typedef struct complexNumber {
    int real;
    int img;
}cn;

void display (cn c){
    printf("The complex number is %d + i%d \n" , c.real, c.img);
}

int main(){

    cn cnum[5];

    for(int i = 0; i < 5; i++){
        printf("Enter a real value of %d  number \n" , i+1);
        scanf("%d" , &cnum[i].real);
        printf("Enter a imaginary value of %d number \n", i+1);
        scanf("%d", &cnum[i].img);
    }

    for(int i = 0; i < 5; i++){
        display(cnum[i]);
    }
    
    return 0;
}
