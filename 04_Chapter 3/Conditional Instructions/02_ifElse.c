#include <stdio.h>

int main(){

    int age;
    printf("Enter your age");
    scanf("%d", &age);

     // if(age!=90){
    if(age >= 90){
        printf("You cannot drive \n");
    }
    else{
        printf("You can drive \n");
    }

     if(age==50){
        printf("Half Century\n");
    }


   return 0;

}