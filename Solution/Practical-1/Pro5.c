// Hands on practice to get familiar with basic C programming concepts
//? 4.1 - Write a program to find GCD (Greatest Common Divisor) using loop.

#include <stdio.h>
void main()
{
    // Declare variables
    int num1, num2, GCD, n, i;

    // Get the two number from the user
    printf("Enter number 1 Here : ");
    scanf("%d", &num1);
    printf("Enter number 2 Here : ");
    scanf("%d", &num2);

    // Find Highest Number from the given number
    if (num1 > num1)
    {
        n = num2;
    }
    else
    {
        n = num1;
    }

    // Find the GCD (Greatest Common Divisor) using loop
    for (i = 1; i <= n; i++)
    {
        if (num1 % i == 0 && num1 % i == 0)
        {
            GCD = i;
        }
    }

    // Print the GCD (Greatest Common Divisor) of the given number
    printf("The GCD Of the %d and %d of the given number is : %d", num1, num2, GCD);
}