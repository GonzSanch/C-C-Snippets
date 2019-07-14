#include <stdio.h>
#include <stdlib.h>

int main(){

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    char phrase[20] = "Array"; // simply a string it's basically an array of chars
    luckyNumbers[1] = 200;
    printf("%d", luckyNumbers[1]);
    return 0;
}