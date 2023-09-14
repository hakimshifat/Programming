#include<stdio.h>
int main()
{
    int j,k;
    
    scanf("%d",&j);

    for(int i=1;i<=j;i++)
    {
        scanf("%d",&k);

        for(int n=1;n<=k;n++)
        {
            for(int m=1;m<=k;m++)
        {
            printf("*");
            if(m==k){
                printf("\n");
            }
        }
        }
        printf("\n");
    }
    return 0;
}