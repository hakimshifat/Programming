#include<stdio.h>
int main()
{
  int i,sum=0,sum1=0,k;
  scanf("%d",&i);
  int cards[i];
  for(int j=0;j<i;j++){
    scanf("%d",cards[i]);
  }
  for(k=0;k<i;k++){
  if((k%2)!=0){
    if(cards[k]>cards[i-k-1]){
      sum = sum + cards[k];
    }
    else{
      sum = sum + cards[i-k-1];
    }
  
  }
  else{
    if(cards[k]>cards[i-k-1]){
      sum1 = sum1 + cards[k];
    }
    else{
      sum1 = sum1 + cards[i-k-1];
    }
  
  }
  }
  printf("%d %d",sum,sum1);
  return 0;
}