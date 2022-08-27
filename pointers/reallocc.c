#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i, n1, n2;
    printf("Enter size");
    scanf("%d", &n1);

    ptr = (int *)malloc(n1 * sizeof(int));

    printf("Addresses ofp reviously allocated memory:\n");
    for (i = 0; i < n1; ++i)
    {
        printf("%pc\n", ptr + 1);
    }

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    // reallocating memory
    ptr = realloc(ptr, n2 * sizeof(int));

    printf("Address of newly allocated memory:\n");
    for (i = 0; i < 2; ++i)
        printf("%pc\n", ptr + i);

    free(ptr);
}