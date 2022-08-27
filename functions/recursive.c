// function calling itself until it reaches a base
#include <stdio.h>
int sum(int n);

int main()
{
    int number, result;

    printf("Enter a postive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum =  %d", result);
    return 0;
}

int sum(int n)
{
    if (n != 0)
        // sum() function callls itself
        return n + sum(n - 1);
    else
        return n;
}