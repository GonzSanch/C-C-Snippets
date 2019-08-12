#include <stdio.h>
//*Programa que transforma Farenheit a celsius mediante una funcion.
#define LOWER   0
#define UPPER   300
#define STEP    20
float fahr2cel(float f);

int main(){
    float fahr;
    fahr=LOWER;
    //prueba de la funcion
    while (fahr<=UPPER){
        printf("La conversion de %.0f ºF es: %.1f ºC.\n", fahr, fahr2cel(fahr));
        fahr=fahr+STEP;
    }
}

float fahr2cel(float f){
    float celsius = 5.0/9.0*(f-32.0);
    return celsius; 
}