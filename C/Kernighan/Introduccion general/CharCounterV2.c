#include <stdio.h>
//*Cuenta los caracteres de la entrada; 2a version
int main(){
    double nc;

    for (nc=0; getchar()!=EOF; ++nc){
        printf("%.0f\n", nc);
    }
}