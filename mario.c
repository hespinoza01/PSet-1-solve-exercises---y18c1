#include <stdio.h>
#include <cs50.h>

int height();
void draw(int height);

int main(void){
    draw(height());
    return 0;
}

int height(){
    printf("\033[2J\033[%d;%dH", 0, 0); //  clear screen
    int h = get_int("Height: ");
    return (h>23 || h<0) ? height() : h;
}

void draw(int height){
    int pivot = height;

    for(int i=1; i<=height; i++){
        for(int j=1; j<=(height+1); j++){
            string value = (j >= pivot) ? "# " : "  ";
            printf("%s", value);
        }
        printf("\n");
        pivot--;
    }
}