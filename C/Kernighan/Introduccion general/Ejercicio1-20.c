#include <stdio.h>
#define TABINC  8
//*DETAB
//*Programa que sustituye una tabulacion por el numero de espacios correspondiente
//*n debe ser un parámetro simbolico TABINC
int main(void){
    int nb, pos, c;

    nb=0;
    pos=1;

    while ((c=getchar())!=EOF){
        if(c == '\t'){
            nb = TABINC - ((pos-1) % TABINC);

            while (nb > 0){
                putchar(' ');
                ++pos;
                --nb;
            }
        }
        else if(c=='\n'){
            putchar(c);
            pos=1;
        }
        else {
            putchar(c);
            ++pos;
        }
    }

    return 0;
}