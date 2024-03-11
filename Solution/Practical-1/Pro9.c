// Hands on practice to get familiar with basic C programming concepts
//? 6 - Write a program to display prime numbers between two intervals.

#include <stdio.h>
void main()
{
    // Declare variables
    int start, end;
    int i;
    int j;

    // Get Start and End from the user
    printf("Enter the start index here : ");
    scanf("%d", &start);
    printf("Enter the end index here : ");
    scanf("%d", &end);

    // Using for print the prime numbers
    for (i = start; i <= end; i++)
    {
        int flag = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
            }
        }
        if (flag)
        {
            printf("%d ,", i);
        }
    }
}