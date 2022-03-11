#include <stdio.h>
void goodMorning();
void goodAfternoon();
void GoodNight();

int main(){
    goodMorning();
    return 0;
}

void goodMorning(){
    printf("Hello Rabbit, Goood Morning \n");
    goodAfternoon();
}

void goodAfternoon(){
    printf("Hello Rabbit, Goood Afternoon \n");
    GoodNight();
}

void GoodNight(){
    printf("Hello Rabbit, Goood Night \n");
}
