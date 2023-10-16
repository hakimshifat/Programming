#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdarg.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define fo(i, n) for(ll i=0;i<n;i++) //shorting for loop

void swap(int *xp,int *yp){ // simple swapping
        int temp=*xp;
        *xp=*yp;
        *yp=temp;
}

void selsort(int arr[],int size){ // array sorting from small to big
    int i,j,k;
    for(int i=0;i<size-1;i++){
        k=i;
        for(j=i+1;j<size;j++)
            if(arr[j]<arr[k]) //change the >/< to flip the sorting direction
                k=j;
        swap(&arr[k],&arr[i]);

    }
}

int inputarray(int arr[],int size){ //array input
    fo(i,size){
        scanf("%d",&arr[i]);
    }
}
void printarray(int arr[],int size){ // array output
    fo(i,size){
        printf("%d ",arr[i]);
    }
}
int main()
{
    int test;
    scanf("%d",&test);
    int m[test];
    inputarray(m,test);
    //printarray(m,test);
    selsort(m,test);
    printarray(m,test);
    return 0;
}
