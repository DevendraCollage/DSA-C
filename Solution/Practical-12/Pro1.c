//* Implementation of Data Structure Singly Linked List
//? 1. Write algorithms to perform following operations on Singly Linked List:
//? ◦ Insert a node at the beginning of the linked list
//? ◦ Insert a node at the end of the linked list
//? ◦ Delete a node at first
//? ◦ Display all the nodes

#include <stdio.h>
#include <stdlib.h>

// Create Structure
struct node
{
    int info;
    struct node *link;
};

struct node *first, *last;

//? Insert Node First Function
void inset_first(int x)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node *));

    // If List Is Empty then insert the first node
    if (first == NULL)
    {
        newNode->info = x;
        newNode->link = NULL;
        first = newNode;
    }
    else
    {
        newNode->info = x;
        newNode->link = first;
        first = newNode;
    }
}

//? Insert Node Last Function
void insert_last(int y)
{
    struct node *newNode, *save;
    newNode = (struct node *)malloc(sizeof(struct node *));

    if (first == NULL)
    {
        newNode->info = y;
        newNode->link = NULL;
        first = newNode;
    }
    else
    {
        save = first;
        while (save->link != NULL)
        {
            save = save->link;
        }
        newNode->info = y;
        newNode->link = NULL;
        save->link = newNode;
    }
}

//? Delete the first node function
void deleteFirst()
{
    struct node *x;
    int data;

    if (first == NULL) // If there is list empty
    {
        printf("Underflow!\n\n");
        return;
    }
    else if (first->link == NULL) // If list will have only one node
    {
        data = first->info;
        x = first;
        first = NULL;
        free(x);
        printf("Delete node will be : %d\n\n", data);
    }
    else
    { // If list will have more than one node
        data = first->info;
        x = first;
        first = first->link;
        free(x);
        printf("Deleted node will be : %d\n\n", data);
    }
}

//? Display all the nodes Function
void display()
{
    struct node *save;
    save = first;
    if (save == NULL)
    {
        printf("List is Empty!\n\n");
    }
    else
    {
        while (save != NULL) // If save pointer variable is not NULL then this will display all the nodes
        {
            printf("%d\n", save->info);
            save = save->link;
        }
        printf("\n");
    }
}

int main()
{
    int choice;
    int x;
    do
    {
        printf("----- Menu -----");
        printf("\n1.Insert node at first\n2.Insert node at last\n3.Delete node at first\n4.Display\n5.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
        case 1:
            printf("Enter a number to insert at first : ");
            scanf("%d", &x);
            printf("\n");
            inset_first(x);
            break;
        case 2:
            printf("Enter a number to insert at last : ");
            scanf("%d", &x);
            printf("\n");
            insert_last(x);
            break;
        case 3:
            deleteFirst();
            break;
        case 4:
            display();
            break;
        case 5:
            return 0;
        default:
            printf("Enter the valid choice!");
        }
    } while (choice != 5);
    return 0;
}