// user define function for testing whether the valueis a prime number or not
// number is  a prime number if it si divisible by itself or one

#include <stdio.h>

void checkPrimeNumber();

int main()
{
    checkPrimeNumber(); // argument is not passed
    return 0;
}

// return type is void meaning doesnt return any value
void checkPrimeNumber()
{
    int n, i, flag = 0;

    printf("enter a positive interger: ");
    scanf("%d", &n);

    // 0 and 1 are not prime  numbers
    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % 2 == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
}