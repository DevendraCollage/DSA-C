// Hands on practice to get familiar with basic C programming concepts
//? 3 - Write a program to check whether a number is prime or not.

#include <stdio.h>
void main()
{
    // Declare variables
    int num;
    int i;
    int flag = 1;

    // Get the number from the user
    printf("Enter the number here : ");
    scanf("%d", &num);

    // Check the number is Prime or not
    if (num <= 1)
    {
        flag = 0;
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    // Check the number and print it
    if (flag)
        printf("%d Is Prime Number.\n", num);
    else
        printf("%d Is Not Prime Number.", num);
}