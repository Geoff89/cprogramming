// program to calculate the sum of n numbers entered by the user

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    // if memmory cannont be allocated
    if(ptr == NULL){
        printf("Error! memory not allocated");
        exit(0);
    }

    printf("Enter elements: ");
    for(i = 0; i < n; ++i){
        scanf("%d", ptr + 1);
        sum += *(ptr + 1);
    }

    printf("Sum = %d", sum);


    //deallocating the memory
    free(ptr);

    return 0;
}