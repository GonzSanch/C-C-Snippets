#include <stdio.h>

int main()
{
    char a = 'e'; //Char, character, puedfe ser un elemento cualquiera: letra, numero, simbolo. BYTES: 1 , rango 0...255

    short b = -15; //Same as char, BYTES:2, RANGO: -128...127

    int c = 1024; //BYTES:2, RANGO: -32768...32767

    unsigned int d = 128; //Same as INT pero solo puede ser positivo. BYTES:2, RANGO: 0...32767

    long e = 123456; //BYTE: 4, RANGO: -2147483648...2147483637

    float f = 15.678; //BYTE: 4 , RANGO: 1.2E-38...3.4E+38 y 6 decimales

    double g = 871239.76123; //BYTE: 8, RANGO: 2.3E-308...1.7E+308 y 15 decimales

    printf("El char es %c \n", a);

    printf("El short es %i \n", b);

    printf("El int es %i \n", c);

    printf("El unsigned int es %i \n", d);

    printf("El long es %li \n", e);

    printf("El float es %.2f \n", f);

    printf("El double es %lf \n", g);

    printf("MIX: %c %i %.2f", a, b, f); //asi podemos poner varias variables en un mismo print
}
