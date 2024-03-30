//* Implementation of Stack application : Converting In􀆒x Expression to Post/Prefix
//? 2. Write a program to convert the given infix notation to prefix notation.

#include <stdio.h>
#include <string.h>
char stack[100]; // Define array for stack
int top = -1;    // Define top as initial 0

//? Push Function
void push(char x)
{
    top++;
    stack[top] = x;
}

//? Pop Function
char pop()
{
    return stack[top--];
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

void main()
{
    char exp[100], c, postfix[100];
    int i = 0, j = 0;
    int x;

    //! Take user input expression
    printf("Enter Infix Expression Here : ");
    scanf("%s", exp);

    //! Reverse the input infix expression
    int len = strlen(exp);
    for (i = 0; i < len / 2; i++)
    {
        char temp = exp[i];
        exp[i] = exp[len - i - 1];
        exp[len - i - 1] = temp;
    }

    strcat(exp, ","); // Septate the string with comma at the end of expression to make it easier for loop to work.
    push('(');

    while (exp[i] != '\0')
    {
        c = exp[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            prefix[i++] = c;
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
                prefix[i++] = x;
                x = pop();
            }
        }
        else
        {
            while (priority(stack[top] >= priority(c)))
            {
                x = pop();
                prefix[i++] = x;
            }
            push(c);
        }
        i++;
        prefix[i] = '\0';
    }
    // Reverse the prefix expression to get the correct prefix notation
    len = strlen(prefix);
    for (i = 0; i < len / 2; i++)
    {
        char temp = exp[i];
        exp[i] = exp[len - i - 1];
        exp[len - i - 1] = temp;
    }

    printf("Prefix Expression : %s\n", prefix);
    return 0;
}