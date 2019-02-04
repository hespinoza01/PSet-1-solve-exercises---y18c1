#include <stdio.h>

// Enumerado de los diferentes colores
typedef enum colorsEnum{
    RED, REDBOLD, GREEN, GREENBOLD, YELLOW, YELLOWBOLD, BLUE, BLUEBOLD, MAGENTA, MAGENTABOLD,
    CYAN, CYANBOLD
} colorsEnum;

// Valor salida según el tipo del color a elegir
const char *COLOR[] = {
    "\033[0;31m%s\033[0m", "\033[1;31m%s\033[0m", "\033[0;32m%s\033[0m", "\033[1;32m%s\033[0m",
    "\033[0;33m%s\033[0m", "\033[1;33m%s\033[0m", "\033[0;34m%s\033[0m", "\033[1;34m%s\033[0m",
    "\033[0;35m%s\033[0m", "\033[1;35m%s\033[0m", "\033[0;36m%s\033[0m", "\033[1;36m%s\033[0m"
};

int main(void){
    printf(COLOR[REDBOLD],"hello, world\n");
    return 0;
}