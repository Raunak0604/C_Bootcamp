#include <stdio.h>
#include <string.h>

int main(){
    
    char str1[35], str2[35], c;
    int i = 0;

    printf("Enter the first string of value \n");
    scanf("%s" , str1);
    
    printf("Enter the second string of value \n");
    while(c != '\n'){
        fflush(stdin);
        scanf ("%c" , &c);
        str2[i] = c;
        i++;
    }
    str2[i - 1]= '\0';

    printf("The value of str1 is : %s \n" , str1);
    printf("The value of str2 is : %s \n" , str2);
    printf("Strcmp for these string returns %d" , strcmp (str1, str2));

    return 0;
}
