#include<stdio.h>
int main()
{
    int i,j,sum=0;
    char str[5],temp[5],str1[5],str2[5];
    scanf("%d",&j);
    for(i=0;i<j;i++){
        scanf("%s",&str);
        for(int m=0;m<j;m++){
            str1[m]=str[m];
            str2[m]=str[m];
        }
        if(str[0]=='a' && str[1]=='b' && str[2]=='c') 
        {
            sum++;
        }
        else if(temp[0]=str[1];
            str[1]=str[0];
            str[0]=temp[0];
            if(str[0]=='a' && str[1]=='b' && str[2]=='c'){
                sum++;
            }
        )
            else if(temp[1]=str1[2];
            str1[2]=str1[1];
            str1[1]=temp[1];
            if(str1[0]=='a' && str1[1]=='b' && str1[2]=='c'){
                sum++;
            }
            )
            else if(temp[2]=str2[2];
            str2[2]=str2[0];
            str2[0]=temp[2];
            if(str2[0]=='a' && str2[1]=='b' && str2[2]=='c'){
                sum++;
            }
            )

    
    if(sum==1){
    printf("\nyes");
    }
    else{
        printf("\nno\n");
    }
    }
    return 0;
}