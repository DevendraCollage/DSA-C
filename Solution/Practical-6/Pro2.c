//* Implementation of Data Structure Stack
//? 2. Write a program to reverse a string using Stack.

#include <stdio.h>
#include <string.h>
#define N 100  // Initial Size of the Stack
char stack[N]; // Declare array for the stack
int top = -1;  // Initial top is 0

//? Push Function
void push(int x)
{
    // Check for Stack Overflow condition
    if (top >= N - 1)
    {
        printf("Stack Overflow!");
    }
    else
    {
        // Increment the top by 1
        top++;
        // Insert the element
        stack[top] = x;
    }
}

//? Pop Function
int pop()
{
    // Check for Stack Underflow condition
    if (top == -1)
    {
        printf("Stack Underflow!");
    }
    else
    {
        // Decrement top
        top--;
        return stack[top + 1];
    }
}

//? Reverse String Function
void reverseString(char str[])
{
    // Push all string characters to the stack
    for (int i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }

    // Pop all the character from the array and append it
    int i = 0;
    while (top != -1)
    {
        str[i++] = pop();
    }
    str[i] = '\0';
}
void main()
{
    // Declare temp array to store the user string
    char str[100];

    // Get the string from the user
    printf("Enter the string here : ");
    scanf("%s", &str);

    // Call the reverseString function
    reverseString(str);

    // Print the reversed string
    printf("Your sting will be converted into reversed string is : %s", str);
}