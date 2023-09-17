#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&j);
    for(i=0;i<j;i++){
        scanf("%d",&k);
        int m=k%10;
        int n=k/10000;
        printf("Sum = %d\n",m+n);
        // this works
    }
    return 0;
}