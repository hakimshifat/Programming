#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&j);
    for(i=j;i>=1;i--){
        if((j%i)==0){
            k=j/i;
            printf("%d ",k);
        }
        else{
            continue;;
        }
    }
    return 0;
}