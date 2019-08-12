#include <stdio.h>
//* V1  Programa que copia la entrada a la salida y sustituye las cadenas de varios espacios en blanco por unos solo.

int main(){
    int c, nb;

    nb = 0;
    
    while ((c=getchar())!=EOF){
      if (c==' '){
          ++nb;
        if (1%nb != 0){
            ;    
        }
        else {
          putchar(c);
        }
      }
      else {
          nb=0;
          putchar(c);
      }
    }   
}