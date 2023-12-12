#include<stdio.h>

void printarray(int array[],int size)
{
    //int size;
    for(int i=0;i<size;i++){
        printf("\narray[%d] = %d",i,array[i]);
    }
}

void insert_element(int array[],int size, int element, int location)
{
    for(int i=size;i>=location;i--){
        array[i+1]=array[i];
    }
    array[location]=element;
    size++;
}

int main()
{
    int array[10]={65,4565,45,54,67};
    int i,k,N,P;

    N=5;

    printf("Content of the array:");
    printarray(array,N);
    printf("\nEnter the element to be inserted:");
    scanf("%d",&P);
    printf("\nIndex where the element should be inserted:");
    scanf("%d",&k);

    for(i=N;i>=k;i--){
        array[i+1]=array[i];
    }
    array[k]=P;
    N++; 

 //   insert_element(array,N,P,k);

        printf("Content of the array after inserting:");
    printarray(array,N);



    return 0;
}