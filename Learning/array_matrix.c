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
    int i,j,M[3][3];
    printf("\nEnter the elemnet of 3x3 Matrix:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("M[%d][%d] = ",i,j);
            scanf("%d",&M[i][j]);
        }
    }

    printf("\nThe Matrix is:");
    for(i=0;i<3;i++){
        printf("\n\t\t");
            for(j=0;j<3;j++){
                printf("%d  ",M[i][j]);
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