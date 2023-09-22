#include<stdio.h>
int main()
{
    int j,sum=0; //j=test case, s=statement
    char s[5];
    scanf("%d",&j); //input testcase
    for(int i=0;i<j;i++){ //testcase loop
        scanf("%s",&s); //input statement
       // for(int m=0;m<j;m++){
            if((s[0]=='+') || (s[2]=='+')){
                sum++;
            }
            else{
                sum--;
            }
        //}

    }
    printf("%d",sum);
    return 0;
}