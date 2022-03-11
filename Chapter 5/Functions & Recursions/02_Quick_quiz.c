#include <stdio.h>
void goodMorning();
void goodAfternoon();
void GoodNight();

int main(){
    goodMorning();
    goodAfternoon();
    GoodNight();
    return 0;
}

void goodMorning(){
    printf("Hello Rabbit, Goood Morning \n");
}

void goodAfternoon(){
    printf("Hello Rabbit, Goood Afternoon \n");
}

void GoodNight(){
    printf("Hello Rabbit, Goood Night \n");
}