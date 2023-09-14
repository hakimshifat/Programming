#include<stdio.h>
int main()
{
    int i,j,sum=0;
    for(i=1000;i>=1;i--){
        sum=sum+1;
        printf("%d ",i);
        if((sum%5)==0){
            printf("\n");
        }
    }
    return 0;
}