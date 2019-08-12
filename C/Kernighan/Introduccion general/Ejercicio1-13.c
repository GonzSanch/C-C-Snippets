#include <stdio.h>
//*Programa que imprima histograma de longitudes de palabras.
//TODO hacer dinamica la altura
//Debemos saber el inicio y final de la palabra para calcular su longitud, por tanto definimos su estado
#define IN  1   //dentro de la palabra
#define OUT 0   //fuera de la palabra

int main (){
    int c, state, nc, i,j;
    int nlength[10];
    for (i = 0; i < 10; ++i){       
        nlength[i]=0;
    }
    state = OUT;

    while ((c = getchar())!=EOF){
        if (c==' ' || c=='\n' || c=='\t'){
                state = OUT;
                ++nlength[nc-1];
                nc=0;
        } else{
                state = IN;
                ++nc;
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", nlength[i]);
    }

    printf("Histograma: \n");
    for (i = 10; i > 0; --i){
        for (j = 0; j < 10; ++j){
            if (nlength[j]>=i){
                printf(" _ ");
            } else {
                printf("   ");
            }
        printf("\t");
        }
    printf("\n");
    }
}