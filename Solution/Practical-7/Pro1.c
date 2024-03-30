//* Implementation of Stack application : Converting In􀆒x Expression to Post/Prefix
//? 1. Write a program to convert the given infix notation to postfix notation.

#include <stdio.h>
#include <string.h>
char stack[100]; // Declare array for the stack
int top = -1;    // Initial top is 0

//? Push Function
void push(char x)
{
    top++;
    stack[top] = x;
}

//? Pop Function
char pop()
{
    return stack[top - 1];
}

//? Priority Function
int priority(char x)
{
    // Check the priority of the input characters
    if (x == '(') //! This will have the highest priority
    {
        return 0;
    }
    if (x == '+' || x == '-') //! This will have the lowest priority than
    {
        return 1;
    }
    if (x == '*' || x == '/' || x == '%') //! This will have the highest priority than (+, -)
    {
        return 2;
    }
    if (x == '^') //! This will have the highest priority than (*, /, %)
    {
        return 3;
    }
    return -1;
}
int main()
{
    char exp[100], c, postfix[100];
    int i = 0, j = 0;
    int x;

    //! Take user input expression
    printf("Enter Infix Expression Here : ");
    scanf("%s", exp);

    //! Concat the string with ,
    strcat(exp, ",");

    //! Push initial '(' to the stack
    push('(');

    while (exp[i] != '\0')
    {
        c = exp[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            postfix[i++] = c;
        }
        else if (c == '(')
        {
            push(c);
        }
        else if (c == ')')
        {
            x = pop();
            while (x != '(')
            {
                postfix[i++] = x;
                x = pop();
            }
        }
        else
        {
            while (priority(stack[top] >= priority(c)))
            {
                x = pop();
                postfix[i++] = x;
            }
            push(c);
        }
        i++;
    }
    postfix[j] = '\0';
    printf("Postfix Expression : %s", postfix);
    return 0;
}