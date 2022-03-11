#include <stdio.h>

void encrypt (char *st){
    char *ptr = st;
    while(*ptr != '\0'){
        *ptr = *ptr + 1;
        ptr++; 
    }
}

int main(){
    
    char st[] = "Come to this room";
    encrypt(st);
    printf("Encrypted string is : %s" , st);

    return 0;
}