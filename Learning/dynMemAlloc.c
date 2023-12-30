#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printarray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\narray[%d] = %d", i, array[i]);
    }
}

// Why use malloc, to get size from user and allocating exactly that

int main()
{
    int *ptr;
    int size;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    ptr = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value at %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("\nThe value at %d of this array is %d", i, ptr[i]);
    }

    return 0;
}