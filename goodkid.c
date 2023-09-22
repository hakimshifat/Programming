#include<stdio.h>
int main()
{
    int j,k,a[10],m;
    int smallest=0;
    scanf("%d",&j);
    for(int i=0;i<j;i++){
        scanf("%d",&k);
        for(m=0;m<k;m++){
            scanf("%d",&a[m]);
        if(a[m]<a[m+1]){
            smallest=a[m];
            }
    //    else
      //      { 
        //        smallest=a[m+1];
          //  }
        
    }
    }
    printf("%d",smallest);
    return 0;
}