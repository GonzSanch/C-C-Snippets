//?Probaría el programa para comprobar errores de derecha a izquierda es decir empezando por las tabulaciones, slatos de lineas y espacios comprobando con una misma frase que el conteo es el mismo en ambos casos.

//*Programa que imprime su entrada palabra por línea.

#include <stdio.h>

#define IN  1   //en una palabra
#define OUT 0   //fuera de una palabra

int main(){
    int c, state;
    state = OUT;

    while ((c = getchar())!=EOF){
        if (c==' ' || c=='\n' || c=='\t'){
                state = OUT;
        } else if (state == OUT){
                state = IN;
                putchar('\n');
        }
        putchar(c);    
    }
}