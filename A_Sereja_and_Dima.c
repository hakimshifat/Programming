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
      //  if((j/2)==0){
        if(cards[m]>cards[j+1-m]){
          //  temp[m]=cards[m];
          sum = sum + cards[m];
          sum1 = sum1 + cards[j+1-m];
            //temp1[m]=cards[j];
        }
        else{
           sum = sum + cards[j+1-m];
          sum1 = sum1 + cards[m];
           // temp[m]=cards[j];
           // temp1[m]=cards[m];
        }
    }
    else{
        if(cards[m]>cards[j]){
          sum1 = sum1 + cards[m];
          sum = sum + cards[j+1-m];
          //  temp[m]=cards[m];
           // temp1[m]=cards[j];
        }
        else{
        sum1 = sum1 + cards[j+1-m];
          sum = sum + cards[m];
          //  temp[m]=cards[j];
           // temp1[m]=cards[m];
           sum1 = sum1 + (cards[1+j/2]/2);
           sum = sum + (cards[1+j/2]/2);
        }
    } 
    }
    
    printf("%d %d",sum,sum1);

    return 0;
}