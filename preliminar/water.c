#include <cs50.h>
#include <stdio.h>


//Declaración de las funciones
int minutos();
int botellas();


//main
int main(void)
{
    printf("Botellas: %d", botellas(minutos())); //se hace llamado  de las funciones y se imprime el resultado

    return 0;
}


//solicita una entrada valida al usuario
int minutos(){
    int n;

    do{
        n = get_int("Minutos: ");
    }while(n<=0);

    return n;
}


//calcula la cantidad de botellas con respecto a los minutos de la duración de la ducha del usuario
int botellas(int m){
    int onzas = 192*m;

    return  onzas/16;
}