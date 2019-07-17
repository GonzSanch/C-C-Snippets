#include <stdio.h>
#include <stdlib.h>

int main () {
    int age = 30;            
    double gpa = 3.4;     
    char grade = 'A';

    printf("\nage:%p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);  //print physical address of the variables below

    return 0;     
}