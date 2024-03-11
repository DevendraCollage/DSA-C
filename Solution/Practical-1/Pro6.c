// Hands on practice to get familiar with basic C programming concepts
//? 4.1 - Write a program to find GCD (Greatest Common Divisor) using recursion.

#include <stdio.h>
int GCD(int n1, int n2)
{
    if (n2 == 0)
    {
        return n1;
    }
    else
    {
        return GCD(n2, n1 % n2);
    }
}
void main()
{
    // Declare variables
    int num1, num2;

    // Get the number from the user
    printf("Enter the number 1 Here : ");
    scanf("%d", &num1);
    printf("Enter the number 2 Here : ");
    scanf("%d", &num2);

    // Call the function and print the results
    printf("Greatest Common Divisor of %d and %d is : %d\n", num1, num2, GCD(num1, num2));
}