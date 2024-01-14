#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int info;
    struct Node *next;
};

typedef struct Node node;

void print(node *head);
node* insert_start(int value, node *first);
void insert_middle(int value, int index, node *first);
void insert_end(int value,node *first);
int search_LL(int value, node *first);
node* delete_LL(int value, node *first);

int main()
{

    node *a = (node *)malloc(sizeof(node));
    node *b = (node *)malloc(sizeof(node));
    node *c = (node *)malloc(sizeof(node));

    a->info = 10;
    b->info = 20;
    c->info = 30;

    a->next = b;
    b->next = c;
    c->next = NULL;

    node *first = a;
    node *last = c;

    cout<<"The Linked list before Operation\n";
    

    while(1){
    print(first);
    cout <<"\n";
    cout<<"\n1 - Print\n2 - Insert\n3 - Delete\n4 - Search\n5 - Exit\nChoice:";
    int choice;
    cin >> choice;

    switch(choice){
        case 1:{
         print(first);
         break;
        }
        case 2:{
            cout<<"\nWhere do you want to insert the number?";
            cout<<"\n1.At Start\n2.At Middle\n3.At end\n";
            cout<<"choice:";
            int choice1;
            cin>>choice1;
            switch(choice1){
                case 1:{
                    cout<<"Enter the number you want to insert\n";
                    cout<<"choice:";
                    int insert;
                    cin >> insert;
                    node *newhead = insert_start(insert, first);
                    cout<<"after inserting the value\n";
                   // print(newhead);
                   first = newhead;
                    break;
                }
                case 2:{
                    cout<<"Enter the number you want to insert\n";
                    cout<<"choice:";
                    int insert;
                    cin >> insert;
                    cout<<"Enter the index number where you want to insert the value(excluding first and last)";
                    int index;
                    cin >> index;
                    insert_middle(insert,index,first);
                    cout<<"\n";
                  //  print(first);
                    break;
                    
                }
                case 3:{
                    cout<<"Enter the number you want to insert\n";
                    cout<<"choice:";
                    int insert;
                    cin >> insert;
                    insert_end(insert,first);
                    break;

                }
            }
        break;
        }
        case 3:{
            cout<<"Enter the number you want to delete";
                cout<<":";
                int deleteL1;
                cin >> deleteL1;
               // first = delete_LL(deleteL1,first);
                first = delete_LL(deleteL1, first);
                break;

        }
        case 4:{
            cout<<"Enter the number you want to search\n";
                cout<<"choice:";
                int search;
                cin >> search;
                int index = search_LL(search,first);
                if(index>0){
                    cout<<"Match found. It is in "<<index<<"th location";
                }
                else{
                    cout<<"\nNot found in the list";
                }
        break;
        }
        case 5:{
            exit(1);
            break;
        }
        default:{
            cout<<"\nInvalid choice";
        }
    }
    }
    return 0;
}
void print(node *head){
    node *temp = head;
    while(temp != NULL){
        cout<<temp->info<<"->";
        temp = temp->next;
    }
    cout<<"END";
}
node* insert_start(int value, node *first){
   // node *temp = first;
    node *temp1 =(node*)malloc(sizeof(node));
    temp1->info = value;
    temp1->next = first;
    return temp1;
}

void insert_middle(int value, int index, node *first){
    node *temp = first;
    int count = 0;
    while(temp != NULL){
        count++;
        if(count == index){
            node *newnode = (node*)malloc(sizeof(node));
            newnode->info=value;
            newnode->next=temp->next;
            temp->next = newnode;
        }
        temp = temp->next;
    }
}
void insert_end(int value,node *first){
    node *temp = first;
    node *newend = (node*)malloc(sizeof(node));
    newend->info = value;
    newend->next=NULL;
    if(first == NULL){
        first = newend;
    }
    else{

    while(temp->next != NULL){
        temp = temp->next;
    }
    
    temp->next = newend;
    }
    
}
int search_LL(int value, node *first){
    int count = 0;
    node *temp = first;
    if (first ==NULL){
        cout<<"\nEmpty List";
    }
    while(temp != NULL){
        count++;
        if(temp->info == value){
            break;
        }
        temp = temp->next;
    }
    if(temp = NULL){
        return 0;
    }
    else{
        return count;

    }
}
node* delete_LL(int value, node *first){
    node *newHead = (node*)malloc(sizeof(node));
    newHead->next = first;
    node *temp = newHead;
    while (temp->next != NULL){   
        if(temp->next->info == value){
            temp->next = temp->next->next;
            break;
        }
        else{
            temp = temp->next;
        }
    }
    return newHead->next;  
}
