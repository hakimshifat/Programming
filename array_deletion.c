#include<stdio.h>

void printarray(int array[],int size)
{
    //int size;
    for(int i=0;i<size;i++){
        printf("\narray[%d] = %d",i,array[i]);
    }
}

void delete_element(int array[],int size, int location)
{
    int element;
    element=array[location];
    for(int i=location;i<=size;i++){
        array[i]=array[i+1];
    }
    
    size--;
}

int main()
{
    int array[10]={65,4565,45,54,67};
    int i,k,N,P;

    N=5;

    printf("Content of the array:");
    printarray(array,N);
    printf("\nIndex which element should be deleted:");
    scanf("%d",&k);

 /*   P = array[k];
    for(i=k;i<=N;i++){
        array[i]=array[i+1];
    }
    N--; 
*/

    delete_element(array,N,k);
    printf("Content of the array after deleting:");
    printarray(array,N);



    return 0;
}