#include <stdio.h>

//*copia la entrada a la salida; 2a Versión
int main(){
    int c;
    while ((c = getchar())!=EOF) {
        putchar(c);
    }    
}