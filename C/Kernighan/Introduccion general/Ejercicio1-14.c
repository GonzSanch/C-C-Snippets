#include <stdio.h>
//*Programa que imprima histograma de frecuencia de caracteres.

int main (){
    int c, nc, i,j;
    int nlength[26];
    int abc[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n','o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    for (i = 0; i < 26; ++i){       
        nlength[i]=0;
    }

    while ((c = getchar())!=EOF){
        for (i = 0; i < 26; ++i){       
            if (c==abc[i]){
                ++nlength[i];
            }
        }
    }

    for (i = 0; i < 26; i++)
    {
        printf("%c : %d ",abc[i] ,nlength[i]);
    }
    printf("\n");
    for (i = 20; i > 0; --i){
        for (j = 0; j < 26; ++j){
            if (nlength[j]>=i){
                printf(" _ ");
            } else {
                printf("   ");
            }
        printf("\t");
        }
    printf("\n");
    }
}