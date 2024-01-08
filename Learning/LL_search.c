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

int searchLL(int searching_value, node *head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL){
        count++;
        if(temp->value==searching_value){
            break;
        }
        else{
            temp = temp->next;
        }
    }
    if(temp==NULL){
        return 0;
    }
    else{
        printf("Search successfull.\nThe index is :");
        return count;
    }
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

    int search;
    printf("\nEnter the value you want to search:");
    scanf("%d", &search);
    int result = searchLL(search,head);
    if (result==0){
        printf("Search failed\n.The value is not present in the Linked List");
    }
    else{
        printf("%d",result);
    }

    return 0;
}