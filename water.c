#include <stdio.h>
#include <cs50.h>

int minutos();
int botellas(int minutos);

int main(void){
    printf("Botellas: %d\n", botellas(minutos()));
    return 0;
}

int minutos(){
    printf("\033[2J\033[%d;%dH", 0, 0); //  clear screen
    int n = get_int("Minutos: ");
    return (n<=0) ? minutos() : n; // verify value
}

int botellas(int minutos){
    return (192 * minutos) / 16; // Calculate
}