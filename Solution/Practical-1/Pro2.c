// Hands on practice to get familiar with basic C programming concepts
//? 1.2 - Write a program to find factorial of a number using recursive approach.

#include <stdio.h>
int factorial(int fact)
{
    if (fact == 1)
    {
        return 1;
    }
    else
    {
        return fact * factorial(fact - 1);
    }
}
void main()
{
    // Declare variables
    int num;

    // Get the number from the user
    printf("Enter The Number Here : ");
    scanf("%d", &num);

    // Call the function and pass the given number by user
    factorial(num);

    // Print the factorial of the give number
    printf("%d Factorial Is : %d", num, factorial(num));
}