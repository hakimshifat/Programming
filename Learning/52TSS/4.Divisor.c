#include<stdio.h>
int main()
{
    int k,j;
    scanf("%d",&j); //test case
    for(int i=1;i<=j;i++){ 
        scanf("%d",&k); //The number
        printf("Case %d:",i);
        for(int m=k;m>=1;m--){
            if((k%m)==0){
            printf(" %d",(k/m));
            if(m==1){
                printf("\n");
            }
        }
    }
    }
    return 0;
}