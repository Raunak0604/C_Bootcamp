#include <stdio.h>

int strlen ( char *st){
    char *ptr = st;
    int len = 0;
    while(*ptr!= '\0'){
        ptr++;
        len++;
    }
    return len;
}

int main(){
    
    char st[] = "Rabbit";
    int l = strlen(st);
    printf ("The lenght of the string is %d \n" , l);

    return 0;
}
