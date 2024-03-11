// Hands on practice to get familiar with basic C programming concepts
//? 5.2 - Write a program to calculate power using recursion.

#include <stdio.h>
int Power(int num, int pow)
{
    // Declare temp variable for storing result
    int result = 1;
    int i;

    // Using for loop calculate the power of the number
    for (i = 1; i <= pow; i++)
    {
        result = result * num;
    }

    return result;
}
void main()
{
    // Declare variables
    int num1, power;

    // Get the number from the user
    printf("Enter the number here : ");
    scanf("%d", &num1);

    // Get the power of the number
    printf("Enter the power here : ");
    scanf("%d", &power);

    // Call function and print result
    printf("The result is : %d", Power(num1, power));
}