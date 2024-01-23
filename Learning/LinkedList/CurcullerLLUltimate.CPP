#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int info;
    struct Node *next;
};

typedef struct Node node;

void print(node *head,node *last);
node* insert_start(int value, node *first);
void insert_middle(int value, int index, node *first, node *last);
node* insert_end(int value,node *first, node *last);
node* search_LL(int value, node *first, node *last);
node* delete_LL(int value, node *first, node *last);

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
    c->next = a;

    node *first = a;
    node *last = c;

    cout<<"The Circuller Linked list before Operation\n";
    

    while(1){
    cout<<"\n";
    print(first,last);
    cout<<"\n";
    cout<<"\n1 - Print\n2 - Insert\n3 - Delete\n4 - Search\n5 - Exit\nChoice:";
    int choice;
    cin >> choice;

    switch(choice){
        case 1:{
         print(first,last);
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
                    insert_middle(insert,index,first,last);
                    cout<<"\n";
                  //  print(first);
                    break;
                    
                }
                case 3:{
                    cout<<"Enter the number you want to insert\n";
                    cout<<"choice:";
                    int insert;
                    cin >> insert;
                    last = insert_end(insert,first,last);
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
                first = delete_LL(deleteL1, first, last);
                break;

        }
        case 4:{
            cout<<"Enter the number you want to search\n";
                cout<<"choice:";
                int search;
                cin >> search;
                node *index = search_LL(search,first,last);
                if(index==NULL){
                    cout<<"Not found\n";
                }
                else{
                    cout<<"Found. It is located before"<<index->next->info<<" in the list\n";
                }
                break;
        }
        case 5:{
            //exit
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
void print(node *head,node *last){
    node *temp;
    if(head == NULL){
        cout<<"\nEmpty List";
    }
    else if(head == last){
        cout<<head->info;
    }
    else{
        for(temp = head;temp!=last;temp = temp->next){
            cout<<temp->info<<"->"<<" ";
        }
        cout<<last->info;
    }
    cout<<" ->END";
    cout<<"\n";
}
node* insert_start(int value, node *first){
   // node *temp = first;
    node *temp1 =(node*)malloc(sizeof(node));
    temp1->info = value;
    temp1->next = first;
    return temp1;
}

void insert_middle(int value, int index, node *first, node *last){
    node *temp = first;
    int count = 0;
    while(temp != last){
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
node* insert_end(int value,node *first, node *last){
    node *newend = (node*)malloc(sizeof(node));
    newend->info = value;
    if(first == NULL){
        first = last = newend;
        newend->next = first;
    }
    else{
    last->next = newend;
    newend->next = first;
    last = newend;
    return last;
    }   
}
node *search_LL(int value, node *first, node *last){
    node *temp = first;
    if(first == NULL){
        cout<<"Empty list";
    }
    else if((first == last)&&(first->info==value)){
        return first;
    }
    while(temp != last){
        if(temp->info == value){
            return temp;
            break;
        }
        temp = temp->next;
        
    }
    if(last->info==value){
            return last;
        }
        else{
            return NULL;
        }
}
node* delete_LL(int value, node *first, node *last){
    node *newHead = (node*)malloc(sizeof(node));
    newHead->next = first;
    node *temp = newHead;
    
    while (temp->next != last){   
        if(temp->next->info == value){
            temp->next = temp->next->next;
            break;
        }
        else{
            temp = temp->next;
        }
    }
    if(last->info == value){
        last = temp;
    }
    return newHead->next;  
}