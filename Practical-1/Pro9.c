//* Hands on practice to get familiar with basic C programming concepts
//! 6.Write a program to display prime numbers between two intervals.

#include <stdio.h>

void main()
{
    int lower, upper;

    printf("Enter The Start Range of the Number : ");
    scanf("%d", &lower);
    printf("Enter The End Range of the Number : ");
    scanf("%d", &upper);

    for (int i = lower; i <= upper; i++)
    {
        int flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1; //? Set to True if a divisor is found
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d, ", i);
        }
    }
}