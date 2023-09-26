#include<stdio.h>

int main()
{
    int j,sum=0,sum1=0;
    scanf("%d",&j);
    int cards[j];
    for(int i=1;i<=j;i++){
        scanf("%d",&cards[i]);
    }
    for(int m=1;m<=(j/2);m++){
    if(((m+1)%2)==0){
        if(cards[m]>cards[j]){
          //  temp[m]=cards[m];
          sum = sum + cards[m];
          sum1 = sum1 + cards[j];
            //temp1[m]=cards[j];
        }
        else{
           sum = sum + cards[j];
          sum1 = sum1 + cards[m];
           // temp[m]=cards[j];
           // temp1[m]=cards[m];
        }
    }
    else{
        if(cards[m]>cards[j]){
          sum1 = sum1 + cards[m];
          sum = sum + cards[j];
          //  temp[m]=cards[m];
           // temp1[m]=cards[j];
        }
        else{
        sum1 = sum1 + cards[j];
          sum = sum + cards[m];
          //  temp[m]=cards[j];
           // temp1[m]=cards[m];
        }
    } 
    }
    
    printf("%d %d",sum1,sum);

    return 0;
}