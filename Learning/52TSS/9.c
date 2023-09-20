#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,m;
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&j);
        if((sqrt(j))*(sqrt(j))==j){
            printf("YES\n");
        }
        else if(j==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}