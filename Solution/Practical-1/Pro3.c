// Hands on practice to get familiar with basic C programming concepts
//? 2 - Write a program to 􀆒nd factors of a given number.

#include <stdio.h>
void main()
{
    // Declare variables
    int num;
    int i;

    // Get the number to print the factors get from the user
    printf("Enter the number here : ");
    scanf("%d", &num);

    // Print the factors of the given number
    printf("The factors of the %d is : \n", num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d,", i);
        }
    }
}