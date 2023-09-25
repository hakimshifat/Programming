#include<stdio.h>

int main(){
    int i;
    scanf("%d",&i);
    int cards[i],temp[i],temp1[i];
    for(int j=0;j<i;j++){
        scanf("%d",&cards[j]);
    }
    for(int k=0;k<i;k++){
        if(cards[k]>cards[i-k-1]){
            temp[k]=cards[k];
            temp1[k]=cards[i-k-1];
        }
        else{
            temp[k]=cards[i-k-1];
            temp1[k]=cards[k];
        }
        }

    for(int n=0;n<i;n++){
    printf("%d %d\n",temp[n]+temp[n+1],temp1[n]+temp1[n+1]);
    break;
    }
    return 0;
}