#include <stdio.h>
//* Ajuste para mostrar todas las lineas mayores que 80 = MAXTOPRINT
#define MAXLINE 9999    //Tamaño máximo de la linea de entrada
#define MAXTOPRINT  80  //Tamaño máximo para imprimir en pantalla
int getline(char line[], int maxline);
void copy(char to[], char from[]);

//*imprime la linea de entrada más larga
int main(){
    int len;    //longitud actual de la linea
    int max;    //máxima longitud vista hasta el momento
    char line[ MAXLINE];    //linea de entrada actual
    char longest[MAXLINE];  //la linea más larga se guarda aquí
    max=0;
    printf("Lineas mayores que %d :\n\n", MAXTOPRINT);
    while ((len = getline(line, MAXLINE))>0){
        if (len>max){
            max = len;
            copy(longest, line);
        }
        if (max>=MAXTOPRINT){ //hubo una linea
        printf("%s\nEl numero de caracteres de la linea es de %d\n", longest, max);
        printf("------------------------------------------------\n");
        }
        
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
void copy(char to[], char from[]){
    int i;

    i=0;
    while ((to[i]=from[i]) != '\0'){
        ++i;
    }  
}