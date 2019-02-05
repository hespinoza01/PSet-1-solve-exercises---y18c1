#include <stdio.h>
#include <cs50.h>

float input();
int money(float input);

int main(void){
    printf("hai!\n");
    printf("%d\n", money(input()));
    return 0;
}

float input(){
    printf("\033[2J\033[%d;%dH", 0, 0); //  clear screen
    float value = get_float("How much change is owed?\n");
    return (value <= 0) ? input() : value * 100;
}

int money(float input){
    int counter = 0;

    while(input > 0){
        if(input >= 25){
            input -= 25;
        }else if(input >= 10){
            input -= 10;
        }else if(input >= 5){
            input -= 5;
        }else{
            input -= 1;
        }
        counter++;
    }

    return counter;
}