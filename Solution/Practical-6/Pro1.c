//* Implementation of Data Structure Stack
//? 1. Write a menu driven program to perform following operations on Stack: PUSH, POP, PEEP, CHANGE and DISPLAY.

#include <stdio.h>
#define N 5

int S[N];     // Declare the array and pass the size of N
int top = -1; // Initial top is 0
int i;

//? Push Function
void push(int x)
{
    // Check for stack overflow condition
    if (top >= N)
    {
        printf("Stack Overflow!");
    }
    else
    {
        // Increment top
        top++;
        // Insert Element
        S[top] = x;
    }
}

//? Pop Function
int pop()
{
    // Check for Stack Underflow
    if (top == -1)
    {
        printf("Stack Underflow!");
        return -1;
    }
    else
    {
        // Decrement top
        top--;
        // Return former top element of stack
        return S[top + 1];
    }
}

//? Peep Function
int peep(int i)
{
    // Check for stack underflow
    if (top - i + 1 <= -1)
    {
        printf("Stack Underflow!");
        return -1;
    }
    else
    {
        // Return Ith element from the stack
        return S[top - i + 1];
    }
}

//? Change Function
void change(int i, int x)
{
    // Check for stack underflow
    if (top - i + 1 <= -1)
    {
        printf("The Element is Not Available!");
    }
    else
    {
        // Change Ith element from top of the stack
        S[top - i + 1] = x;
    }
}

//? Display Function
void display()
{
    int i; // Loop Variable

    if (top == -1)
    {
        printf("Stack Underflow!");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d", S[i]);
        }
    }
}
int main()
{
    int choice, x, i; // These variables are used to determine the value
    do
    {
        printf("----- Menu -----");
        printf("\n1.Push\n2.Pop\n3.Peep\n4.Change\n5.Display\n6.Exit\n\n");
        printf("Enter your choice here : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter a number to push : ");
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            x = pop();
            if (x == -1)
            {
                printf("Stack Underflow!\n");
            }
            else
            {
                printf("%d will be the popped element\n", x);
            }
            break;
        case 3:
            printf("Enter I : ");
            scanf("%d", &i);
            x = peep(i);
            if (x == -1)
            {
                printf("Ith Element is not available!\n");
            }
            else
            {
                printf("%d is the %dth element\n", x);
            }
            break;
        case 4:
            printf("Enter i : ");
            scanf("%d", &i);
            printf("Enter x : ");
            scanf("%d", &x);
            change(i, x);
            break;
        case 5:
            display();
            break;
        case 6:
            return 0;
        default:
            printf("Enter valid choice!");
            break;
        }
    } while (choice != 6);
    return 0;
}