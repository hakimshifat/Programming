#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int info;
    struct Node *next;
    struct Node *prev; //this is what makes it different from normal lined list
};

typedef struct Node node;

void print_forward(node *first,node *last);
void print_reverse(node *first,node *last);
node* insert_start(int value, node *first);
void insert_middle(int value, int index, node *first, node *last);
node* insert_end(int value,node *first, node *last);
node* search_LL(int value, node *first, node *last);
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
    a->prev = NULL;
    b->next = c;
    b->prev = a;
    c->next = NULL;
    c->prev = b;

    node *first = a;
    node *last = c;

    cout<<"The Double Linked list before Operation\n";
    

    while(1){
    cout<<"\n";
    print_forward(first,last);
    cout<<"\n";
    cout<<"\n1 - Print\n2 - Insert\n3 - Delete\n4 - Search\n5 - Exit\nChoice:";
    int choice;
    cin >> choice;

    switch(choice){
        case 1:{
            cout<<"1.Forward\n2.Reverse";
            cout<<"\nChoice:";
            int choice;
            cin >> choice;
            switch(choice){
                case 1:{
                    print_forward(first,last);
                    break;
                }
                case 2:{
                    print_reverse(first,last);
                    break;
                }
            }
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
                   first = newhead;
                    break;
                }
                case 2:{
                    cout<<"Enter the number you want to insert\n";
                    cout<<"choice:";
                    int insert;
                    cin >> insert;
                    cout<<"Enter the index number where you want to insert the value(excluding first(0) and last)\n";
                    int index;
                    cin >> index;
                    insert_middle(insert,index,first,last);
                    cout<<"\n";
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
                first = delete_LL(deleteL1, first);
                break;

        }
        case 4:{
            cout<<"Enter the number you want to search\n";
                cout<<"choice:";
                int search;
                scanf("%d", &search);
                node *index = search_LL(search,first,last);
                if(index==NULL){
                    cout<<"Not found\n";
                }
                else if(index == last){
                    cout<<"Its the last element of the list";
                }
                else if(index == first){
                    cout<<"Its the first element of the list";
                }
                else{
                    cout<<"Found. It is located before "<<index->next->info<<" and after "<<index->prev->info<<"  in the list\n";
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
void print_forward(node *first,node *last){
    node *temp;
    if(first == NULL){
        cout<<"\nEmpty List";
    }
    else if(first == last){
        cout<<first->info;
    }
    else{
        for(temp = first;temp!=last;temp = temp->next){
            cout<<temp->info<<"->"<<" ";
        }
        cout<<last->info;
    }
    cout<<" ->END";
    cout<<"\n";
}
void print_reverse(node *first, node *last){
    node *temp;
    if(first == NULL){
        cout<<"\nEmpty List";
    }
    else if(first == last){
        cout<<first->info;
    }
    else{
        for(temp = last;temp!=first;temp = temp->prev){
            cout<<temp->info<<"->"<<" ";
        }
        cout<<first->info;
    }
    cout<<" ->END";
    cout<<"\n";

}

node* insert_start(int value, node *first){
   // node *temp = first;
    node *temp1 =(node*)malloc(sizeof(node));
    temp1->info = value;
    temp1->next = first;
    temp1->prev = NULL;
    first->prev = temp1;
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
            newnode->prev=temp->prev;
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
    newend->next = NULL;
    newend->prev = last;
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
    if(last->info == value){
            return last;
        }
        else{
            return NULL;
        }
}
node* delete_LL(int value, node *first){
    node *newHead = (node*)malloc(sizeof(node));
    newHead->next = first;
    newHead->prev = NULL;
    node *temp = newHead;
    while(temp->next != NULL){
        if(temp->next->info == value){
            temp->next = temp->next->next;
            break;
        }
        else{
            temp = temp->next;
        }
    }
    if(temp->info == value){
        temp=NULL;
    }
        
    return newHead->next;  
}