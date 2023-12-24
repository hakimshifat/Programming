#include<stdio.h>
#include<string.h>
#include<math.h>

void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
}

void printarray(int array[],int size)
{
    //int size;
    for(int i=0;i<size;i++){
        printf("\narray[%d] = %d",i,array[i]);
    }
}

void solve()
{
    int a=56;
    int b=98;
    printf("\na=%d\nb=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\na=%d\nb=%d",a,b);

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