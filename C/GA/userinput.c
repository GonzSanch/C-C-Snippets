#include <stdio.h>
#include <stdlib.h>

int main () {

    char name[20];
    printf("\nEnter your name: ");
    fgets(name, 20, stdin);
    printf("your name is %s \n", name);

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("your age is %d\n", age);
    
    double gpi;
    printf("\nEnter your gpi: ");
    scanf("%lf", &gpi);
    printf("your gpi is %lf\n", gpi);



    return 0;
}