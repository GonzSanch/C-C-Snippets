#include <stdio.h>
int main (){
    float fahr, celsius;
    int lower, upper, step;

    lower=0;    //Límite inferior de la table de temperaturas
    upper=300;  //Límite superior
    step=20;    //Tamaño del incremento

    celsius=lower;
    printf("Celsius\tFarenheit\n");
    while (celsius<=upper)
    {
        fahr = (celsius*9.0/5.0)+32;
        printf("%.0f\t%10.1f\n",celsius, fahr);
        celsius=celsius+step;
    }
    
}