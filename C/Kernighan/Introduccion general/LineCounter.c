#include <stdio.h>
//*Cuenta las lineas de la entrada
int main(){
  int c, ni;

  ni = 0;
  while ((c=getchar())!=EOF){
      if (c=='\n'){
          ++ni;
          printf("%d\n", ni);
      }
      
  }   
}