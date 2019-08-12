#include <stdio.h>

#define MAXLINE 1000 //maximo tamaño de una linea de entrada

int max;    //maxima longitud vista hasta el momento
char line[MAXLINE]; //linea de entrada actual
char longest[MAXLINE]; //la linea mas larga se guarda aqui

int getline(void);
void copy(void);

//imprime la linea mas larga, version especializada
int main(){
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while((len = getline()) > 0){
        if (len > max){
            max = len;
            copy();
        }
    }
    if(max > 0 ){ // hubo una linea
        printf("%s", longest);
    } 

    return 0;
}

//getline: version especializada
int getline(void){
    int c, i;
    extern char line[];

    for(i=0;i<MAXLINE-1 && (c=getchar())!= EOF && c!='\n';++i){
        line[i]=c;
    }
    if(c=='\n'){
        line[i]=c;
        ++i;
    }
    line[i]='\0';
    return i;
}

//copy: version especializada
void copy(void){
    int i;
    extern char line[], longest[];

    i=0;
    while ((longest[i]=line[i])!= '\0'){
        ++i;
    }
}
