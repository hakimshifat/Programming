#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100],ch1[100];
    scanf("%s",&ch);
    scanf("%s",&ch1);
    strlwr(ch1);
    strlwr(ch);
    int k=strcmp(ch,ch1);
    printf("%d",k);
    return 0;
}