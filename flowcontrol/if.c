// program to relate wo integers using =, . or < symbol

#include <stdio.h>
int main()
{
    int number1, number2;
    printf("Enter two intergers: ");
    scanf("%d %d", &number1, &number2);

    //check if the two integers are equal
    if (number1 == number2) {
        printf("Result: %d = %d", number1, number2);
    }

    // check if number1 is greate than number2
    else if (number1 > number2) {
        printf("Result: %d > %d", number1, number2);
    }
    
    // checks if both expressions are false
    else{
        printf("Result: %d < %d", number1, number2);
    }

    return 0;
}