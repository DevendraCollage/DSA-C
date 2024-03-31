//* Implementation of Stack and Queue using Linked List
//? 1. Write a program to implement stack using linked list.

#include <stdio.h>
#include <stdlib.h>

// Create Stucture
struct node
{
    int info;
    struct node *link;
};

// Pointer variable
struct node *top = NULL, *temp = NULL;

//? 1. Push Function
void push(int x)
{
    // Allocate memory dynamically
    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL)
    {
        printf("Memory Allocation Failed!\n");
        return;
    }
    temp->info = x;
    temp->link = top;
    top = temp;
    printf("Node is Inserted!\n");
}

//? 2. Pop Function
int pop()
{
    if (top == NULL)
    {
        printf("\nStack Underflow!\n");
        return -1;
    }
    int popped = top->info;
    struct node *temp = top;
    top = top->link;
    printf("\nPopped Element is : %d\n", *temp);
    free(temp);
    return popped;
}

//? 3. Display Function
void display()
{
    struct node *save;
    save = top;

    if (top == NULL)
    {
        printf("\nStack Underflow!\n");
        return;
    }

    printf("Elements of the Stack is \n");
    while (save != NULL)
    {
        printf("%d\n", save->info);
        save = save->link;
    }
    printf("Null\n\n");
}

int main()
{
    int choice;
    int x;
    do
    {
        printf("----- Menu Driven Program Stack Implementation Using Stack -----");
        printf("\n1.Insert Node\n2.Delete Node\n3.Display\n4.Exit");
        printf("\nEntr Your Choice : ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
        case 1:
            printf("Enter the node you want to insert : ");
            scanf("%d", &x);
            push(x);
            printf("\n");
            break;
        case 2:
            pop();
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