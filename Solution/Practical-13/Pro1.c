//* Implementation of Data Structure Ordered Linked List
//? 1. Write a menu driven program to implement following operations on the Ordered Linked List.
//? ◦ Insert a node such that linked list is in ascending order
//? ◦ Display the list
//? ◦ Delete a first node of the linked list
//? ◦ Delete a last node of the linked list
//? ◦ Delete a specific node

#include <stdio.h>
#include <stdlib.h>

// Create Structure
struct node
{
    int info;
    struct node *link;
};

// Define the pointer variables
struct node *first = NULL, *last;

//? Insert Function To Maintain th List in ascending order
void insert_ordered(int x)
{
    struct node *new, *prev, *save;
    // Allocate memory dynamically
    new = (struct node *)malloc(sizeof(struct node *));

    if (new == NULL)
    {
        printf("Node not available!");
        return;
    }
    else
    {
        new->info = x;
        if (first == NULL)
        {
            new->link = NULL;
            first = new;
        }
        else if (new->info <= first->info)
        {
            new->link = first;
            first = new;
        }
        else
        {
            save = first;
            prev = first;
            while ((save != NULL) && (new->info >= save->info))
            {
                prev = save;
                save = save->link;
            }
            new->link = save;
            prev->link = new;
        }
    }
}

//? 2. Display Function
void display()
{
    struct node *save;
    save = first;
    while (save != NULL)
    {
        printf("%d\n", save->info);
        save = save->link;
    }
}

//? 3. Delete First Node Function
void delete_first()
{
    struct node *x;
    int data;

    if (first == NULL) // If list will be empty
    {
        printf("Underflow!");
        return;
    }
    else if (first->link == NULL) // If list have only one node
    {
        data = first->info;
        x = first;
        first = NULL;
        free(x);
        printf("Delete node will be : %d", data);
    }
    else // If list have more than one node
    {
        data = first->info;
        x = first;
        first = first->link;
        free(x);
        printf("Deleted node will be : %d", data);
    }
}

//? 4. Delete Last node Function
void delete_last()
{
    struct node *prev, *save;
    int data, x;

    if (first == NULL)
    {
        printf("Underflow!");
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
        printf("Deleted Node Will be : %d", data);
    }
}

//? 5. Delete a specific node Function
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
    // Declare variables
    // Choice is used for getting choice from the user
    // X is used for getting value from the user
    int choice, x;
    do
    {
        printf("----- Menu Driven Program of the Ordered Linked List -----");
        printf("\n1.Insert the node\n2.Display\n3.Delete First Node\n4.Delete Last Node\n5.Delete Specific Node\n6.Exit");
        printf("\nEnter Your Choice here : ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
        case 1:
            printf("Enter the number you want to insert : ");
            scanf("%d", &x);
            printf("\n");
            insert_ordered(x);
            break;
        case 2:
            display();
            break;
        case 3:
            delete_first();
            break;
        case 4:
            delete_last();
            break;
        case 5:
            printf("Enter the node you want to delete : ");
            scanf("%d", &x);
            delete_specific(x);
            printf("\n");
            break;
        case 6:
            return 0;
        default:
            printf("Enter the valid choice!");
        }
    } while (choice != 6);
    return 0;
}