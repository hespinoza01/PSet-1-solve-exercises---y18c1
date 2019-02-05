#include <cs50.h>
#include <stdio.h>


//Declaración de las funciones
void mostrar();
int tam();


//main
int main(void){

    mostrar(tam());  //se realiza el llamado de las funciones encargadas de la ejecución del programa

    return 0;
}



//tam se encarga de la solicitud de un número valido que posteriormente será la atura de la media pirámide
int tam(){
    int n;  //almacena la entrada del usuario

    do{
        n = get_int("Height: ");
    }while(n>23 || n<0);  //si el número ingresado es menor a cero, y mayor a 23 se vuelve a solicitar la entrada

    return n;
}


//imprime la media pirámide
void mostrar(int h){
    int n = h;  //pibote, usado para verificar y realizar la correcta impresión de la media pirámide

    for(int i=1; i<=h; i++){
        for(int j=1; j<=(h+1); j++){
            if(j>=n){                 //se encarga de imprimir el # en las posiciones de la fila que sean mayares o iguales al pibote
                printf("#");
            }else{
                printf(" ");
            }
        }
        printf("\n");
        n--;
    }

}