#include <stdio.h>
#include <string.h>
#include <math.h>

void printarray(int array[], int size)
{
    // int size;
    for (int i = 0; i < size; i++)
    {
        printf("\narray[%d] = %d", i, array[i]);
    }
}

void solve()
{
    printf("Enter The Matrix A");
    int row, colum;
    printf("Enter the size of the matrix, Row_Colum:");
    scanf("%d %d", &row, &colum);
    int A[row][colum], B[row][colum];
    printf("\nEnter the matrix:");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf("\n[%d][%d]=", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nPrinting the matrix:");

    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < colum; j++)
        {
            printf("%d\t", A[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            B[i][j] = A[j][i];
        }
    }

    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < colum; j++)
        {
            printf("%d\t", B[i][j]);
        }
    }
}

int main()
{
    int TestCase = 1;
    scanf("%d", &TestCase);
    while (TestCase--)
    {
        solve();
    }
    return 0;
}