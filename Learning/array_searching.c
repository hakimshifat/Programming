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
    int array[5]={22,19,4,10,8};
    int i,k,flag=0,index;
    printarray(array,5);

    printf("\nEnter the element to be serached:");
    scanf("%d",&k);

    //starting search

    for(i=0;i<5;i++){
        if(k==array[i]){
            flag=1;
            index=i;
            break;
        }
        else{
            ;
        }
    }
    if(flag==1){
        printf("\n Search Successfull!\nThe Element %d is Present at Index Location %d",k,index);
    }
    else{
        printf("Not found");
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