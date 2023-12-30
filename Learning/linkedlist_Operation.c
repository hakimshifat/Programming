#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

struct node
{
    int INFO;
    struct node *NEXT;
};

typedef struct node NODE;

int main()
{
    NODE *a = NULL;
    NODE *b = NULL;
    NODE *c = NULL;
    NODE *FIRST = a;
    NODE *LAST = c;

    a = (NODE *)malloc(sizeof(NODE));
    b = (NODE *)malloc(sizeof(NODE));
    c = (NODE *)malloc(sizeof(NODE));

    a->INFO = 10;
    b->INFO = 20;
    c->INFO = 30;

    a->NEXT = b;
    b->NEXT = c;
    c->NEXT = NULL;

    NODE *temp = a; // Setting temp to the start of the list

    while (temp != NULL)
    {
        printf("%d ->", temp->INFO);
        temp = temp->NEXT;
    }

    int value;
    printf("\nEnter the value to be inserted:");
    scanf("%d", &value);
    NODE *ptr = (NODE *)malloc(sizeof(NODE));
    ptr->INFO = value;
    ptr->NEXT = NULL; // since it will be added at the end of the linked list

    if (a == NULL)
    {
      //  a = ptr;
        FIRST = LAST = ptr;
    }
    else
    {
        temp = a;
        while (temp->NEXT != NULL) //will be true when it reaches the end of the linked list
        {
            temp = temp->NEXT; 
        }
        temp->NEXT = ptr;
    }

    printf("\nAfter insertion the linked list\n");

    temp = a; // Resetting temp to the start of the list
    while (temp != NULL)
    {
        printf("%d ->", temp->INFO);
        temp = temp->NEXT;
    }
    printf("END");

    return 0;
}
