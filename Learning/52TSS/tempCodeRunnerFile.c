#include<stdio.h>
divisor()
{
    int i,j,k;
    scanf("%d",&j);
    for(i=j;i>=1;i--){
        if((j%i)==0){
            k=j/i;
            printf("Case %d:", i);
            printf("%d ",k);
        }
        else{
            continue;;
        }
    }
}

int main()
{
    int m,k;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        divisor(m);
    }
    return 0;
}