#include <stdio.h>

int main(){

    //97 - 122 is lowercase (ASCII value)
    char ch;
    printf("Enter a letter to check it's lowercase or not \n");
    scanf("%c" , &ch);

    if (ch >= 97 && ch <= 122){
        printf("This letter is lowercase \n");
    } 

    else{
        printf("This letter is not lowercase \n");
    }

    return 0;
}