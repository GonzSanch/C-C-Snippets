#include <stdio.h>
//*Imprime la tabla Farenheit-Celsius para fahr = 0,20,...,300.
int main (){
    float fahr, celsius;
    int lower, upper, step;

    lower=0;    //Límite inferior de la table de temperaturas
    upper=300;  //Límite superior
    step=20;    //Tamaño del incremento

    fahr=lower;
    while (fahr<=upper)
    {
        celsius=5.0/9.0*(fahr-32.0);
        printf("%3.0f\t%6.1f\n",fahr, celsius);
        fahr=fahr+step;
    }
    
}