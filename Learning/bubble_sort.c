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
    int array[5]={5,4,3,2,1};
    int i=5,j,k,temp;
    printf("\nThe initaial array is:");
    printarray(array,5);
    //start of the sort

    for(i=5;i>1;i--){ // i=5,4,3,2
        for(j=0;j<i-1;j++){ //i=5,j=0,1,2,3 | i=4,j=0,1,2 | i=3,j=0,1 | i=2,j=0
            if(array[j]>array[j+1]){
                temp = array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
printf("\nThe sorted array is:");
printarray(array,5);

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