#include<stdio.h>
int main()
{
    int number,sum = 0;
    printf("Enter Number: ");
    scanf("%d",&number);
    while(number>10){
        sum = sum + number % 10;
        number /= 10;
    }
    printf("%d\n",sum);
    return 0;
}