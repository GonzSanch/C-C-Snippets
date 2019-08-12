#include <stdio.h>
//*Programa que borra los blancos y tabulaciones al final de cada linea de entrada.
#define MAXLINE 9999    //Tamaño máximo de la linea de entrada
int getline(char line[], int maxline);
int eraseblank(char line[], int end);

//*imprime la linea de entrada más larga
int main(){
    char line[MAXLINE];    //linea de entrada actual
    int nl = 0;
    int len,blank;

    while ((len = getline(line, MAXLINE))>0){
        ++nl;
        blank = eraseblank(line, len);
        printf("linea %d, caracteres %d, blank %d\n", nl, len, blank);
        line[++blank] = '\n';
        line[++blank] = '\0';
        printf("%s", line);
    }
    return 0;
}

//getline: lee una linea en s, regresa su longitud
int getline(char s[], int lim){
    int c,i;
    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i){
        s[i]=c;
    }
    if (c=='\n'){
        s[i] = c;
        ++i;
    }
    s[i]='\0';
    return i;
}

int eraseblank(char s[], int len){
    int i,n;
    for (i = len-1; (s[i] == ' ' || s[i] == '\t' || s[i] == '.' || s[i] == '\n'); --i){
        ;
    }

    return i;
}