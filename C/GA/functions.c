#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age){
    printf("Hello %s, you are %d", name, age);
}

int main(){
    sayHi("Gonzalo",25);
    return 0;
}

