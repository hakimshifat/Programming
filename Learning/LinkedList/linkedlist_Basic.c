#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int INFO;
        struct node *NEXT;
    };
    typedef struct node NODE;

    NODE *a = NULL;
    NODE *b = NULL;
    NODE *c = NULL;

    a = (NODE *)malloc(sizeof(NODE));
    b = (NODE *)malloc(sizeof(NODE));
    c = (NODE *)malloc(sizeof(NODE));

    a->INFO = 10;
    b->INFO = 20;
    c->INFO = 30;

    a->NEXT = b;
    b->NEXT = c;
    c->NEXT = NULL;

    NODE Head = *a;
    NODE last = *c;

    while (a != NULL)
    {
        printf("%d ->", a->INFO);
        a = a->NEXT;
    }

    return 0;
}
