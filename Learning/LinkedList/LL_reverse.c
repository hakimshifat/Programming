#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *next;
};
typedef struct Node node;

void print_LL(node *head);
void reverse_LL(node *head);
int main()
{
    node *a = (node *)malloc(sizeof(node));
    node *b = (node *)malloc(sizeof(node));
    node *c = (node *)malloc(sizeof(node));

    a->value = 10;
    b->value = 20;
    c->value = 30;

    a->next = b;
    b->next = c;
    c->next = NULL;

    node *head = a;
    node *last = c;

    print_LL(head);
    reverse_LL(head);
    // print_LL(head);

    return 0;
}

void print_LL(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
    printf("NULL");
}

void reverse_LL(node *head)
{
    node *prev = NULL, *current = head, *next;
    while (current != NULL){
    next = current->next; //storing next node
    current->next = prev; // reversing connection
    prev = current;
    current = next;
    }
    head = prev;
    printf("\n");
    print_LL(head);

}