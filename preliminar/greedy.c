#include <cs50.h>
#include <stdio.h>


//declaración de las funciones
float valor();
void monedas();

//declaración de una variable global  para almacenar el valor del cambio
int cambio, contador = 0;



//main
int main(void)
{
    cambio = valor();
    monedas();
    printf("%d\n",contador);

    return 0;
}




//solicita el valor de el cambio y se lo asigna a la variable global
float valor (){
    float n;

    do{
        n = get_float("How much change is owed?\n");
    }while(n<=0);

    return n*100;
}

//cuenta la cantidad de quarters necesarios
void monedas(){

    while(cambio>0){
        if(cambio>=25){
            cambio-=25;
        }else if(cambio>=10){
            cambio-=10;
        }else if(cambio>=5){
            cambio-=5;
        }else{
            cambio-=1;
        }
        contador++;
    }
}