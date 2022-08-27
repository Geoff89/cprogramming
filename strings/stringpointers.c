#include <stdio.h>

int main(void){
    char name[] = "Harry Potter";

    printf("%c", *name);   //output: H
    printf("%c", *(name+1)); //output a
    printf("%c", *(name+7)); //output o

    char *namePtr;

    namePtr = name;
    printf("%c", *namePtr); //ouptu H
    printf("%c", *(namePtr+1));  //output: a
    printf("%c", *(namePtr+7));    //output: o
}