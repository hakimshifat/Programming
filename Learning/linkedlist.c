#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int INFO;
    struct node *NEXT;
};

// Declaring pointers to first and last node of the  linked list
struct node *FIRST = NULL;
struct node *LAST = NULL;

// Declaring fuction prototype for linked list operations
void insert(int);
int delete(int);
void print(void);
struct node *search(int);

int main()
{
    int n1, n2, choice;
    struct node *location;

    while (1)
    {
        printf("\nSelect option");
        printf("\n 1- Insert");
        printf("\n 2 - Delete");
        printf("\n 3 - Search");
        printf("\n 4 - Print");
        printf("\n 5 - Exit");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("Enter a number to be inserted into the linked list");
            scanf("%d", &n1);
            insert(n1);
            printf("\nSuccessfully inserted %d to the linked list", n1);
            break;
        }
        case 2:
        {
            printf("Enter a number to be deleted from the linked list");
            scanf("%d", &n1);
            n2 = delete (n1);
            if (n2 = -9999)
            {
                printf("\n%d is not present in the linked list", n1);
            }
            else
            {
                printf("\n%d successfully deleted from the linked list", n1);
            }
            break;
        }
        case 3:
        {
            printf("Enter a number to be searched");
            scanf("%d", &n1);
            location = search(n1);
            if (location = NULL)
            {
                printf("\n%d is not present in the linked list", n1);
            }
            else
            {
                if (location == LAST)
                {
                    printf("\n Element %d is the last element of the list", n1);
                }
                else
                {
                    printf("\nElement %d is present before element %d in the linked list", n1, (location->NEXT)->INFO);
                }
            }

            break;
        }
        case 4:
        {
            printf("\nPrinting the linked list");
            print();
            break;
        }
        case 5:
        {
            exit(1);
            break;
        }

        default:
        {
            printf("\nIncorrect choice.Try again");
            break;
        }
        }
    }

    // insert function

    void insert(int value) //it adds the value to the end of the linked list
    {
        /*making new node*/
        struct node *PTR = (struct node *)malloc(sizeof(struct node));
        PTR->INFO = value;

        if (FIRST == NULL) //check if the linked list is empty
        {
            FIRST = LAST = PTR;
            PTR->NEXT = NULL;
        }
        else
        {
            LAST->NEXT = PTR;
            PTR->NEXT = NULL;
            LAST = PTR;
        }
    }
    return 0;
}