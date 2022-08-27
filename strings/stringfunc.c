#include <stdio.h>
void displayString(char str[]);


int main(){
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    displayString(str);   //passing string to afunction
    return 0;
}

void displayString(char str[]){
    printf("String Output: ");
    puts(str);
}