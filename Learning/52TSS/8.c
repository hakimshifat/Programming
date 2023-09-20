#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    int m,n1,n2,n3,temp;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n2>n1){
        temp=n2;
        n2=n1;
        n1=temp;
    }
    else{
        temp=n1;
        n2=n2;
        n1=temp;
    }
    if(n1>n3){
        temp=n1;
        n3=n3;
        n1=temp;
    }
    else{
        temp=n3;
        n3=n1;
        n1=temp;
    }
    if(n2>n3){
        temp=n2;
        n3=n3;
        n2=temp;
    }
    else{
        temp=n3;
        n3=n2;
        n2=temp;
    }
    printf("Case %d: %d %d %d\n",i,n3,n2,n1);
    
    }
    return 0;
}