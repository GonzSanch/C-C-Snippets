#include <stdio.h>
#include <stdint.h>

int main(){
    char characterName [] = "John";
    int characterAge = 35;
    printf ("There once was a man named %s\n", characterName); //%s to string
    printf ("he was %d years old.\n", characterAge);           //%d for int
    printf ("He really like the name %s\n", characterName);
    printf ("but did not like to being %d.\n", characterAge);
}