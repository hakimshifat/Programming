#include<stdio.h>
int main(){
    int i,j,sum=0;
    scanf("%d %d",&i, &j);
    int k[i];
    for(int m=0;m<i;m++){
        scanf("%d",&k[m]);
    }
    for(int n=0;n<i;n++){
        if(k[n]>j){
            sum=sum+2;
        }
        else{
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}