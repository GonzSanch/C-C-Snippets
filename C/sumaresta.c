#include <stdio.h>

#define PI 3.1416 //declaracion de MACRO sería como una cosntante GLOBAL

int y = 5; //variable GLOBAL, fuera del main

int main (){
    
    int x = 10; //variable LOCAL, dentro del main

    int suma = 0;

    float resta = 0;

    suma = PI + x;

    resta = PI - x;

    printf("La suma es %i\n",suma);  //%i, indica el tipo de valor, en este caso entero (int). Añadimos \n para finalizar con un salto de línea.
    printf("La resta es %.2f",resta); // En este caso al ser float, indicamos el numero de decimales que queremos mostrar: (.2).

    return 0;
}