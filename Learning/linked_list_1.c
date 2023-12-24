#include <stdio.h>
#include <string.h>
#include <math.h>

void printarray(int array[], int size)
{
    // int size;
    for (int i = 0; i < size; i++)
    {
        printf("\narray[%d] = %d", i, array[i]);
    }
}
/*
Operations using linked list;
1.insert
2.delete
3.search
4.delete
*/

void insert_solve(){
    /*
    work:
    1. memory reserved for new node
    2. element stored in INFO part
    3. new node is connected to the existing nodes in the list

    Depending on location, there are 3 possible scenarios
    1.At starting of the linked list.
    2.Ending of the linked list.
    3.Middle of the linked list.


    Algorithm to insert an element at the end of a linked list

    1.Start
    2. Set PTR = Addressof ( New Node ) //Allocating a new node and assigning its address to the pointer
    3. Set PTR->INFO = value;
    4. If First=NULL, goto Step 5(Checking if the list is empty) else goto Step 7
    5. Set First = PTR && Last = PTR;
    6. Set PTR->NEXT=Null and goto step 8
    7. Set Last->NEXT=PTR, PTR->Next=Null and Last=PTR
    8. STOP
    
    */
}

void solve()
{
    struct node
    {
        int INFO; //integer data value
        struct node *NEXT; // address of the next value //this NEXT points to node that is itself. Which is called self-referential structures
    };
    typedef struct node NODE; // a new data type NODE i.e node.
}

int main()
{
    int TestCase = 1;
    scanf("%d", &TestCase);
    while (TestCase--)
    {
        solve();
    }
    return 0;
}