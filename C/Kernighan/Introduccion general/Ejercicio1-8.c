#include <stdio.h>
//* V1  El ejercicio consiste en un programa que cuenta espacios, tabulaciones y salto de linea.
//?Probar alternativa:
//TODO Usar varios contadores que indiquen el valor de cada uno de los caracteres registrados.
int main(){
  int c, ni;

  ni = 0;
  while ((c=getchar())!=EOF){
      if (c==' ' || c=='\t' || c=='\n'){
          ++ni;
        printf("%d\n",ni);
      }
      
  }   
}