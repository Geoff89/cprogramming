#include <stdio.h>

struct complex
{
    int imag;
    float real;
};

struct number {
    struct complex comp;
    int interger;
} num1;


int main(){
    // imitialize complex variables
    num1.comp.imag = 11;
    num1.comp.real = 5.25;


    //initailize number variable
    num1.interger = 6;

    //print struct variables
    printf("Imaginary Part: %d\n", num1.comp.imag);
    printf("Real Part: %.2f\n", num1.comp.real);
    printf("Imaginary Part: %d", num1.interger);

    return 0;

    
}