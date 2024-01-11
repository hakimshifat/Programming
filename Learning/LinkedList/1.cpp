#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    struct Node *next;
};
typedef struct Node node;

void printfLL(node *head);

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    node *a = (node *)malloc(sizeof(node));
    node *b = (node *)malloc(sizeof(node));
    node *c = (node *)malloc(sizeof(node));

    a->value = 10;
    b->value = 20;
    c->value = 30;
    a->next = b;
    b->next = c;
    c->next = NULL;

    printfLL(a);

    return 0;
}

void printfLL(node *head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->value << " ->";
        temp = temp->next;
    }
    cout << "NULL";
}