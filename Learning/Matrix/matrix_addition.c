#include<stdio.h>
#include<string.h>
#include<math.h>

void printarray(int array[],int size)
{
    //int size;
    for(int i=0;i<size;i++){
        printf("\narray[%d] = %d",i,array[i]);
    }
}

void solve()
{
    int A[4][4], B[4][4], C[4][4];
    printf("\nEnter the elements of A matrix\n");

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            printf("\nA[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEntered Matrix A is:");
    for(int i=1;i<=3;i++){
        printf("\n");
        for(int j=1;j<=3;j++){
            printf("%d  ",A[i][j]);
        }
    }

    printf("\nEnter the elements of B matrix\n");

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            printf("\nB[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }

        printf("\nEntered Matrix B is:");
    for(int i=1;i<=3;i++){
        printf("\n");
        for(int j=1;j<=3;j++){
            printf("%d  ",B[i][j]);
        }
    }
for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
        C[i][j] = A[i][j] + B[i][j];
    }
}

printf("The Sum of Matrix A and B is shown below\n");

for(int i=1;i<=3;i++){
    printf("\n");
    for(int j=1;j<=3;j++){
        printf("%d  ",C[i][j]);
    }
}
}

int main()
{
    int TestCase=1;
    scanf("%d",&TestCase);
    while(TestCase--){
        solve();
    }
    return 0;
}