#include <stdio.h>

int main(){
    
    int maths, physics, chemistry ;

    printf ("Enter your maths marks \n");
    scanf("%d" , & maths);

    printf ("Enter your physics marks \n");
    scanf("%d" , & physics);

    printf ("Enter your chemistry marks \n");
    scanf("%d" , & chemistry);

    float total = (maths + physics + chemistry ) / 3;

    if (total < 40 || maths < 33 || physics < 33 || chemistry < 33)
    {
        printf ("your total percentage is %f you are fail \n" , total);
    }
    else{
        printf("your total percentage is %f you are pass \n" , total);
    }

    return 0;
}