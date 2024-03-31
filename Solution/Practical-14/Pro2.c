//* Implementation of Stack and Queue using Linked List
//? 2. Write a program to implement queue using linked list.

#include <stdio.h>
#include <stdlib.h>

// Create Structure
struct node
{
    int info;
    struct node *link;
};

// Create Pointer Variable
struct node *rear, *front;

//? 1. Enqueue Function
void enqueue(int x)
{
    // Allocate Memory Dynamically
    // Create Temporary New Node
    struct node *save;
    save = (struct node *)malloc(sizeof(struct node));

    // Store the new value into the new node
    save->info = x;
    // Set the null to the next node link
    save->link = NULL;

    // Check the condition if front and rear are null
    if ((front == NULL) && (rear == NULL))
    {
        front = save;
        rear = save;
    }
    else
    {
        rear->link = save;
    }

    // Store the new node in the Rear
    rear = save;
}

//? 2. Dequeue Function
int dequeue()
{
    // Allocate memory dynamically
    struct node *newNode;
    newNode = front;

    if (front == NULL)
    {
        printf("\nUnderflow\n");
        return -1;
    }
    else
    {
        int temp_data = front->info;
        front = front->link;
        free(newNode);
        return temp_data;
    }
}

//? 3. Display Function
void display()
{
    // Create a temporary pointer variable node
    struct node *temp;

    // Check the condition if front and rear are null
    if ((front == NULL) && (rear == NULL))
    {
        printf("\nQueue is empty!\n");
    }
    else
    {
        temp = front;
        printf("\nThe Queue Elements is : \n");
        while (temp)
        {
            printf("%d\n", temp->info);
            temp = temp->link;
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
        printf("----- Menu Driven Program To Implement Queue Using Linked List -----");
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
        case 1:
            printf("Enter the number you want to enqueue : ");
            scanf("%d", &x);
            enqueue(x);
            printf("\n");
            break;
        case 2:
            printf("\n");
            printf("Enqueued Elements is : %d\n", dequeue());
            printf("\n");
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("Enter the valid choice!\n");
        }
    } while (choice != 4);
    return 0;
}