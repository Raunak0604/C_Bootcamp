#include <stdio.h>

int main(){
    
    char str1[] = "Rabbit" , str2[35], i;
    printf("The first string is %s \n" , str1);

    for(i = 0; str1[i] != '\0'; i++){
        str2[i] = str1[i] ;
    }
    str2[i] = '\0';

    printf("The second string is %s \n" , str2);
    
    return 0;
}
