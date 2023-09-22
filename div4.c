#include<stdio.h>
int main()
{
    int i,j,sum=0;
    char str[5],temp[5];
    scanf("%d",&j);
    for(i=0;i<j;i++){
        scanf("%s",&str);
        if(str[0]=='a' && str[1]=='b' && str[2]=='c') {
            printf("yes");
        }
        else if
        {
            temp[0]=str[1];
            str[1]=str[0];
            str[0]=temp[0];
            if  (str[0]=='a' && str[1]=='b' && str[2]=='c'){
            sum++;
        }
    }   
    printf("%d",sum);
    }
    return 0;
}