#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *next;
};
typedef struct Node node;
void printLL(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d ->", temp->value);
        temp = temp->next;
    }
    printf("NULL");
}
node *delete_value(int deleting_value, node *head)
{
    node *dummy_head = (node *)malloc(sizeof(node));
    dummy_head->next = head;
    node *temp = dummy_head;
    while (temp->next != NULL)
    {
        if (temp->next->value == deleting_value)
        {
            temp->next = temp->next->next;
            break;
        }
        else
        {
            temp = temp->next;
        }
    }
    return dummy_head->next;
}
int main()
{
    node *a;
    node *b;
    node *c;

    a = (node *)malloc(sizeof(node));
    b = (node *)malloc(sizeof(node));
    c = (node *)malloc(sizeof(node));

    a->value = 10;
    b->value = 20;
    c->value = 30;

    a->next = b;
    b->next = c;
    c->next = NULL;

    node *head = a;
    node *last = c;

    printLL(head);

    int delete;
    printf("\nEnter the value you want to delete:");
    scanf("%d", &delete);
    node *return_head = (node *)malloc(sizeof(node));
    return_head = delete_value(delete, head);
    printLL(return_head);

    return 0;
}