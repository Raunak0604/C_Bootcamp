#include <stdio.h>

typedef struct complexNumber {
    int real;
    int img;
}cn;

cn sum (cn n1 , cn n2){
    cn result;
    result.real = n1.real + n2.real;
    result.img = n1.img + n2.img;
    return result;
}

int main(){
    
    cn n1, n2, s;

    n1.real = 3;
    n1.img = 8;
    printf("The value 1st of complex number is %d + i%d \n" , n1.real, n1.img);

    n2.real = 5;
    n2.img = 2;
    printf("The value 2nd of complex number is %d + i%d \n" , n2.real, n2.img);

    s = sum(n1, n2);
    printf("The sum of two complex number is %d + i%d \n" , s.real, s.img);

    return 0;
}