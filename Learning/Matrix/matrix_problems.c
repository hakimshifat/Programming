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
    int size=9;
    int array[11]={35,18,7,12,5,23,16,3,1};
    printf("\nThe array normally");
    printarray(array,size);
    for(int i=size;i>=2;i--){
        array[i+1]=array[i];
    }
    array[2]=99;
    size++;
    printf("\n");
    printf("\nThe array after inserting 99 at index location 2");
    printarray(array,size);
    printf("\nThe array after deleting the first element\n");

    for(int i=0;i<size-1;i++){
        array[i]=array[i+1];
    }
    size--;
    printarray(array,size);
}

int main()
{
    int TestCase=1;
    printf("\nTestcase:");
    scanf("%d",&TestCase);
    while(TestCase--){
        solve();
    }
    return 0;
}