#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE * fpointer;
    
    fpointer = fopen("employees.txt", "w");
    
    fprintf(fpointer, "Jim, Salesman\nPam, Recepcionist\nOscar, Accounting");

    fpointer = freopen("employees.txt", "a", fpointer);

    fprintf(fpointer, "\nMichael, Manager");

    fclose(fpointer);    
    return 0;
}