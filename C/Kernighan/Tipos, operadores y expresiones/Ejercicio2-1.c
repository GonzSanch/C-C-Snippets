#include <stdio.h>
//* Programa que devuelve el valor maximo y minimo sobre los tipos de variables
/*
~0  give bits in 1s
>> 1 right shifts 1bit to remove the sign bit
*/

int main(void){
    printf("Minimum Signed Char %d\n",-(char)((unsigned char) ~0 >> 1) - 1);
    printf("Maximum Signed Char %d\n",(char)((unsigned char) ~0 >> 1));

    printf("Minimum Signed short %d\n",-(short)((unsigned short) ~0 >> 1) - 1);
    printf("Maximum Signed short %d\n",(short)((unsigned short) ~0 >> 1));

    printf("Minimum Signed int %d\n",-(int)((unsigned int) ~0 >> 1) - 1);
    printf("Maximum Signed int %d\n",(int)((unsigned int) ~0 >> 1));

    printf("Minimum Signed long %d\n",-(long)((unsigned long) ~0 >> 1) - 1);
    printf("Maximum Signed long %d\n",(long)((unsigned long) ~0 >> 1));

    printf("Maximum Unsigned Char %d\n",(unsigned char)~0);
    printf("Maximum Unsigned Short %d\n",(unsigned short)~0);
    printf("Maximum Unsigned Int %u\n",(unsigned int)~0);
    printf("Maximum Unsigned Long %lu\n",(unsigned long)~0);

    return 0;
}