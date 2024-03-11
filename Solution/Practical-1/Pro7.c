// Hands on practice to get familiar with basic C programming concepts
//? 5.1 - Write a program to calculate power using loop.

#include <stdio.h>
void main()
{
    // Declare variables
    int num;
    int power;
    int i;
    int result = 1;

    // Get the number and power from the user
    printf("Enter the number here : ");
    scanf("%d", &num);
    printf("Enter the power here : ");
    scanf("%d", &power);

    // Using loop calculate the power of the given number
    for (i = 1; i <= power; i++)
    {
        result = result * num;
    }

    // Print the result
    printf("The result is : %d", result);
}