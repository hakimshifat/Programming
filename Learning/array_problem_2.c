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
    int array[10]={74,39,35,32,97,84};
    int temp;
    int temp1;

    //bubble sort

    int size=6;
    printf("\nThe array before sorting");
    printarray(array,size);
    for(int j=0;j<size;j++){
        for(int i=0;i<size-1;i++){
            if(array[i]>array[i+1]){
            temp=array[i];
            temp1=array[i+1];
            array[i+1]=temp;
            array[i]=temp1;
        }
        }
    }
    printf("\nThe array after sorting");
    printarray(array,size);
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