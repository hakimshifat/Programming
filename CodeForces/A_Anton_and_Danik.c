#include<stdio.h>
#include<string.h>
int main(){
    int j,sum=0,sum1=0;
    scanf("%d",&j);
    char game[j];
    //for(int i=0;i<j;i++){
        scanf("%s",&game);
    //}
     
     for(int m=0;m<j;m++){
        if(game[m]=='A'){
                sum++;
            }
            else{
                sum1++;
            }
     }
     if(sum>sum1){
        printf("Anton");
     }
     else if(sum1>sum){
        printf("Danik");
     }
     else{
        printf("Friendship");
     }
    return 0;
}