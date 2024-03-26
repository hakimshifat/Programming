#include <bits/stdc++.h>
using namespace std;

struct Stack{
    int element;
    struct Stack *next;
};
typedef struct Stack stack;

void push(int);
int pop();
void display();

int main()
{
    int choice;
    int num1 = 0, num2 = 0;
    while(1){
      cout<<"Select operation:\n";
      cout<<"\n[1]Push";
      cout<<"\n[2]Pop";
      cout<<"\n[3]Display";
      cout<<"\n[4]Exit";
      cout<<"\nChoice:";
      cin>>choice;

      switch(choice){
        case 1:{
          cout<<"\nEnter the element:";
          cin>>num1;
          push(num1);
          break;
        }
        case 2:{
           num2 = pop();
          cout<<"\n"<<num2<<" Poped out of the stack\n";
          break;
        }
        case 3:{
          display();
          break;
        }
        case 4:{
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