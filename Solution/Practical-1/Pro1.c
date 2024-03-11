// Hands on practice to get familiar with basic C programming concepts
//? 1.1 - Write a program to find factorial of a number using loop.

#include <stdio.h>
void main()
{
    // Declare variables of the following program
    int num;
    int i;
    int factorial = 1;

    // Get the number from the user
    printf("Enter a number here : ");
    scanf("%d", &num);

    // Using loop to find factorial of a given number
    for (i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }

    // Print the factorial of the given number
    printf("%d Factorial Is : %d", num, factorial);
}