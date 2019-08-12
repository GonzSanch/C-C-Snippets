#include <stdio.h>
//* Programa que invierte la cadena de caracteres s.
//TODO use getline method and create new copyreverse
#define MAXLINE 9999
int getline(char line[], int maxline);
void reverse(char s[]);

int main(){
    char line[MAXLINE];    //linea de entrada actual
    int len;

    while ((len = getline(line, MAXLINE))>0){
        printf("%s",line);
        reverse(line);
        printf("%s\n",line);
        }    
    return 0;
}

//getline: lee una linea en s, regresa su longitud
int getline(char s[], int lim){
    int c,i;
    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i){
        s[i] = c;
    }
    if (c=='\n'){
        s[i] = c;
        ++i;
    }
    s[i]='\0';
    return i;
}

//copy: copia 'from' en 'to'; supone que to es suficientemente grande
void reverse(char s[]){
  char ch;
  int i, j;

  for(j = 0; s[j] != '\0'; j++)
  {
  }

  --j;

  for(i = 0; i < j; i++)
  {
    ch   = s[i];
    s[i] = s[j];
    s[j] = ch;
    --j;
  } 
}