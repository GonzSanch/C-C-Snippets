#include <stdio.h>
//*Cuenta los caracteres de la entrada; 1a version
main(){
    long nc;

    nc = 0;
    while (getchar()!=EOF){
        ++nc;
        printf("%ld\n",nc);
    }
}