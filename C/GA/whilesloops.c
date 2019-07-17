#include <stdio.h>
#include <stdlib.h>

int main(){

    int index = 6;
    /*while (index <= 5)           //check condition first
    {
        printf("%d\n", index);
        index++;
    }*/

    do{                            //check condition after code block
        printf("%d\n", index);
        index++;
    }while (index <= 5);
    
    return 0;
}