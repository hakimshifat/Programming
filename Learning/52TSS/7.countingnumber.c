#include<stdio.h>
int main()
{
    int j,m;
    char n[10000];
    char n1[10000];
    scanf("%d",&j);
    for(int i=0;i<j;i++){
        //scanf("%d",n[i]);
        scanf("%s",&n);
        printf("5th item of it= %s\n",n);
        scanf("%s",&n1);
        printf("5th item of it= %s\n",n1);
    }
    return 0;
}