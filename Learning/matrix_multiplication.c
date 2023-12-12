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

    printf("\nEnter the elements of B matrix\n");

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            printf("\nB[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    printf("\nMatrix A:");
    for(int i=1;i<=3;i++){
        printf("\n");
        for(int j=1;j<=3;j++){
            printf("%d\t",A[i][j]);
        }
    }
    printf("\nMatrix B:");
        
            for(int i=1;i<=3;i++){
                printf("\n");
        for(int j=1;j<=3;j++){
            printf("%d\t",B[i][j]);
        }
    }

/* Multiplying Two Matrixs */

for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
        C[i][j]=0;
        for(int k=1;k<=3;k++){
            C[i][j]=C[i][j]+A[i][k]*B[k][j]; 
        }
    }
}
/*
i=1{
    j=1{
        k=1,2,3
    }
    j=2{
        k=1,2,3
    }
    j=3{
        k=1,2,3
    }
}

*/

printf("The Multiplication of Matrix A and B is shown below\n");

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