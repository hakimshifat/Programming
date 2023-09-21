#include<stdio.h>

int main()
{
    int n,k,sum=0;
    scanf("%d %d",&n, &k); // Number of Participent and The Position of the guy we will compare
    int i,m[n];
    for(i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    for(int j=0;j<n;j++){
        if((m[k-1]<=m[j]) && m[j]>0){ //Array starts from 0
            sum++;
        }

    }
    printf("%d",sum);
    return 0;
}   