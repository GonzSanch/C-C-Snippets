#include <stdio.h>
//* V1  Programa que copia la entrada a la salida y sustituye de forma legible tabulaciones, espacios y //

int main(){
    int c, nb;

    nb = 0;
    
    while ((c=getchar())!=EOF){
      if (c==' '){
          putchar(92);
          putchar('b');
      } else if(c=='\t'){
          putchar(92);
          putchar('t');
      } else if(c=='\\'){
          putchar(92);
          putchar(92);
      }
      else {
          putchar(c);
      }
    }   
}