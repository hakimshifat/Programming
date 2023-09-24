#include<stdio.h>
int main()
{
    int matrix[25][25];
    int m=0,n=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
        for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(matrix[i][j]==1){
                m=i;n=j;
            }
        //    printf("%d",matrix[i][j]);

        }
                }
        if(m>2){
            m=m-2;
        }
        else{
            m=2-m;
        }
        if(n>2){
            n=n-2;
        }
        else{
            n=2-n;
        }
        printf("%d",(m+n));

    return 0;
}