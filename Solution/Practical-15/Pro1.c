//* Implementation of Data Structure Circular Linked List
//? 2. Write a menu driven program to implement following operations on the Circular Linked List.
//? ◦ Insert a node at the beginning of the linked list
//? ◦ Insert a node at the end of the linked list
//? ◦ Display the list
//? ◦ Delete a specific node

#include <stdio.h>
#include <stdlib.h>

// Create Structure
struct node
{
    int info;
    struct node *link;
};

// Create pointer variable
struct node *first, *last;

//? 1. Insert node at First Function
void insert_first(int x)
{
    // Allocate Memory Dynamically
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node *));
    newNode->info = x; // Store the value of x into the newNode->info part

    if (first == NULL)
    {
        newNode->link = newNode;
        first = newNode;
        last = newNode;
    }
    else
    {
        newNode->link = first;
        last->link = newNode;
        first = newNode;
    }
}

//? 2. Insert node at Last Function
void insert_last(int x)
{
    // Allocate memory dynamically
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node *));
    newNode->info = x; // Store the value of x into the newNode->info part

    if (first == NULL)
    {
        newNode->link = newNode;
        first = newNode;
        last = newNode;
    }
    else
    {
        newNode->link = first;
        last->link = newNode;
        last = newNode;
    }
}

//? 3. Delete a specific node
void delete_specific(int y)
{
    struct node *x, *prev, *save;
    int info;
    save = first;

    if (first == NULL) // If List is Empty
    {
        printf("Underflow\n");
        return;
    }
    else if (first->link == NULL) // If List is have one node in the list
    {
        if (y == first->info)
        {
            info = first->info;
            x = first;
            first = NULL;
            free(x);
            printf("Delete node will be : %d\n", info);
        }
        else
        {
            printf("Node not found");
        }
    }
    else // If list hav more than one node
    {
        prev = first;
        save = first;

        while ((save != last) && (save != x))
        {
            prev = save;
            save = save->link;
        }
        x = save;
        prev->link = save->link;
        free(x);
    }
}

//? 4. Display Function
void display()
{
    // Allocate memory dynamically
    struct node *save;
    save = first;

    if (save == NULL)
    {
        printf("\nList is Empty!\n");
    }
    else
    {
        do
        {
            printf("%d\n", save->info);
            save = save->link;
        } while (save != first);
    }
}

int main()
{
    int choice;
    int x;
    do
    {
        printf("----- Menu Driven Program Implement Circular Linked List -----");
        printf("\n1.Insert node at first\n2.Insert node at last\n3.Display\n4.Delete a specific node\n5.Exit");
        printf("\nEnter your choice here : ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
        case 1:
            printf("Enter the node you want to insert at first : ");
            scanf("%d", &x);
            insert_first(x);
            printf("\n");
            break;
        case 2:
            printf("Enter the node you want to insert at last : ");
            scanf("%d", &x);
            insert_last(x);
            printf("\n");
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Enter the node you want to remove : ");
            scanf("%d", &x);
            printf("\n");
            delete_specific(x);
            printf("\n");
            break;
        case 5:
            return 0;
        default:
            printf("Enter the valid choice!\n");
        }
    } while (choice != 5);
    return 0;
}