// Np argument passed but return a value
#include <stdio.h>

int getInterger();

int main()
{   
    int n, i, flag = 0;

    // no argument is passed
    n = getInterger(); 

    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);

    return 0;
}

// return type is void meaning doesnt return any value
int getInterger()
{
    int n;

    printf("enter a positive interger: ");
    scanf("%d", &n);

    return n;

}