#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdarg.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define fo(i,n) for(int i=0;i<n;i++)

int commonchar(char arr[],int size){ //checks if how many common character a string has
    int count=0;
    fo(i,size-1){
        for(int u=i+1;u<size;u++){
            if(arr[i]==arr[u])
             count++;
           //  arr[i]=arr[i+1];
          //   arr[u]=arr[u+1];
        }
    }
return count;
}

int uc_s(char str[],int size){
    int m[256]={0};
    fo(i,size){
        m[(int)str[i]]++;
    }
    int count=0;
    fo(i,256){
        if(m[i]>0){
            count++;
        }
    }
return count;
}


void swap(int *xp,int *yp){ 
        int temp=*xp;
        *xp=*yp;
        *yp=temp;
}
void selsort(int arr[],int size){ //sorting an array in accending order
    int i,j,k;
    for(int i=0;i<size-1;i++){
        k=i;
        for(j=i+1;j<size;j++)
            if(arr[j]<arr[k]) // change < to > for reverse order
                k=j;
        swap(&arr[k],&arr[i]);

    }
}

void inputarray(char arr[],int size){ // taking an array input
    fo(i,size){
        scanf("%[^\n]",&arr[i]);
    }
}
void printarray(char arr[],int size){ // printing the array
    fo(i,size){
        printf("%c",arr[i]);
    }
}
void solve(){
    char str[100];
    inputarray(str,100);
    //inputarray(str,100);
    int m,n;
    m=strlen(str);
  //  printarray(str,m);
   // n=commonchar(str,m);
   //printf("%d %d",m,n);
  n=uc_s(str,m);
  printf("%d",n);
  //  ((m-n)%2==0) ? printf("CHAT WITH HER!") : printf("IGNORE HIM!");
}
int main()
{
    solve();
    return 0;
}