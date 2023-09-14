#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    
    char k[100];
    
    scanf("%d",&i);
    
    for(j=0;j<i;j++){
    
        scanf("%s",k);
        int n=strlen(k);
        int m=k[n-1];
        if((m%2)==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }

    }
    return 0;
}


