#include<stdio.h>
int main()
{
    int i;
    printf("Enter the Number:");
    scanf("%d",&i);
    if(((i%5)==0) && ((i%11==0))){
        printf("\n%d is divisible by both 5 and 11\n",i);
    }
    else if(((i%5)==0) &&((i%11!=0))){
        printf("\n%d is divisible by 5 but not 11\n",i);
    }
    else if(((i%5)!=0) &&((i%11==0))){
        printf("\n%d is divisible by 11 but not 5\n",i);
    }
    else{
        printf("%d is not divisible by both 5 and 11",i);
    }
    return 0;
}