#include<stdio.h>
#include<string.h>
#include<math.h>

void printarray(int array[],int size)
{
    //int size;
    for(int i=0;i<size;i++){
        printf("\narray[%d] = %u",i,&array[i]);
    }
}

void solve()
{
    int ai[5]={1,2,3,4,5};
    printarray(ai,5);
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