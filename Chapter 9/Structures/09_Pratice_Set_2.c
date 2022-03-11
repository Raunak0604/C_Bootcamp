#include <stdio.h>

struct vector{
    int x;
    int y;
};

struct vector sumvector (struct vector v1 , struct vector v2){
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main(){

    struct vector v1, v2, sum;
    
    v1.x = 35;
    v1.y = 45;
    printf("In V1 vector X dim is %d and y dim is %d \n", v1.x, v1.y);

    v2.x = 70;
    v2.y = 80;
    printf("In V2 vector X dim is %d and y dim is %d \n", v2.x, v2.y);

    sum = sumvector(v1, v2);
    printf("Two vector X dim is %d and y dim is %d \n", sum.x, sum.y);

    return 0;
}
