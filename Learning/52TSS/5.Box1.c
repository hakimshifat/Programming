#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=1; i<=n; i++)
    {
        int num;
        scanf("%d",&num);
        for(j=0; j<num; j++)
        {
            for(k=0; k<num; k++){
                printf("*");
            }
            printf("\n");
        }
        if(i!=n)
        {
            printf("\n");
        }

    }


    return 0;
}

