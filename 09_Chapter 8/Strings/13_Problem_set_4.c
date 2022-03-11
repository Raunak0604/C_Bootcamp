#include <stdio.h>
void slice (char *st , int m, int n){
    int i = 0;
    while (i <= n){
        st[i] = st[i+m];
        i++;
    }
    st[i]= '\0';
    
}

int main(){
    
    char str[] = "Rabbit";
    slice(str , 0 , 4);
    printf("%s" , str);

    return 0;
}