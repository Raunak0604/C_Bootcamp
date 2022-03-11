#include <stdio.h>

void dencrypt (char *st){
    char *ptr = st;
    while(*ptr != '\0'){
        *ptr = *ptr - 1;
        ptr++; 
    }
}

int main(){
    
    char st[] = "Dpnf!up!uijt!sppn";
    dencrypt(st);
    printf("Decrypted string is : %s" , st);

    return 0;
}