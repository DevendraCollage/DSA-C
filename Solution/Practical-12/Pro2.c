//* Implementation of Data Structure Singly Linked List
//? Write a menu driven program to implement following operations on the singly linked list:
//? ◦ Insert a node at the first of the linked list
//? ◦ Insert a node at the last of the linked list
//? ◦ Delete the first node of the linked list
//? ◦ Delete the last node of the linked list
//? ◦ Display the list
//? ◦ Delete a specific node
//? ◦ Count number of nodes

#include <stdio.h>
#include <stdlib.h>

// Create Structure
struct node
{
    int info;
    struct node *link;
};

struct node *first, *last; // Two pointer variables for to maintain the last and first position of th nodes

//? 1. Insert node at first Function
void insert_first(int x)
{
    // Allocate the memory of the nodes dynamically
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node *));

    if (first == NULL) // If List is empty and you want to insert first node
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

//? 2. Insert node at Last Function
void insert_last(int y)
{
    // Allocate the memory of the node dynamically
    struct node *newNode, *save;
    newNode = (struct node *)malloc(sizeof(struct node *));

    if (first == NULL) // If list is Empty then you want to insert first node
    {
        newNode->info = y;
        newNode->link = NULL;
        first = newNode;
    }
    else // If list have already more than one node
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

//? 3. Display all the nodes Function
void display()
{
    struct node *save;
    save = first;
    if (first == NULL)
    {
        printf("List is Empty!");
        printf("\n");
    }
    else
    {
        while (save != NULL)
        {
            printf("%d\n", save->info);
            save = save->link;
        }
        printf("\n");
    }
}

//? 4. Count nodes of the List Function
void count()
{
    int count = 0; // Initial value of count is 0 for temporary
    struct node *save;
    save = first;
    while (save != NULL)
    {
        count++;
        save = save->link;
    }

    // After that print the count
    printf("\nThe count of node in the list is : %d\n", count);
}

//? 5. Delete the first node Function
void delete_first()
{
    struct node *x;
    int data;

    if (first == NULL) // If List is Empty
    {
        printf("\nUnderflow!");
        return;
    }
    else if (first->link == NULL) // If List have only one node
    {
        data = first->info;
        x = first;
        first = NULL;
        free(x);
        printf("Deleted Node will be : %d", data);
    }
    else
    { // If List have more than one node
        data = first->info;
        x = first;
        first = first->link;
        free(x);
        printf("\nDeleted Node will be : %d", data);
    }
}

//? 6. Delete the Last node Function
void delete_last()
{
    struct node *save, *prev;
    int x, data;

    if (first == NULL) // If List is Empty
    {
        printf("\nUnderflow\n");
        return;
    }
    else
    {
        save = first;
        prev = first;
        while (save->link != NULL)
        {
            prev = save;
            save = save->link;
        }
        data = save->info;
        prev->link = NULL;
        last = prev;
        x = save->info;
        free(save);
        printf("\nDeleted Node will be : %d\n", data);
    }
}

//? 7. Delete a specific node Function
void delete_specific(int z)
{
    struct node *x, *save, *prev;
    int info;

    if (first == NULL) // If List is Empty
    {
        printf("\nUnderflow!\n");
        return;
    }
    else if (first->link == NULL) // Match the specific node of the list and delete it
    {
        if (z == first->info)
        {
            info = first->info;
            x = first;
            first = NULL;
            free(x);
            printf("\nDelete node will be : %d\n", info);
        }
        else
        {
            printf("\nNode not found!\n");
        }
    }
    else // This will delete the last node of the list
    {
        prev = first;
        save = first;

        while ((save->info != z) && (save != NULL))
        {
            prev = save;
            save = save->link;
        }
        x = save;
        prev->link = save->link;
        free(x);
    }
}

int main()
{
    // Choice is use for get the choice from the user
    // X is use for to get the value user is provide
    int choice, x;
    do
    {
        printf("----- Menu Driven Program of Linked List -----");
        printf("\n1.Insert node at first\n2.Insert node at last\n3.Display\n4.Count node\n5.Delete first node\n6.Delete last node\n7.Delete specific node\n8.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
        case 1:
            printf("Enter the number you want to insert at first : ");
            scanf("%d", &x);
            printf("\n");
            insert_first(x);
            break;
        case 2:
            printf("Ent the number you want to insert at last : ");
            scanf("%d", &x);
            printf("\n");
            insert_last(x);
            break;
        case 3:
            display();
            break;
        case 4:
            count();
            break;
        case 5:
            delete_first();
            break;
        case 6:
            delete_last();
            break;
        case 7:
            printf("Enter the node you want to delete : ");
            scanf("%d", &x);
            printf("\n");
            delete_specific(x);
            break;
        case 8:
            return 0;
        default:
            printf("\nEnter the valid choice!");
        }
    } while (choice != 8);
    return 0;
}