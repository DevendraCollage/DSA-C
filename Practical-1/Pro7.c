//* Hands on practice to get familiar with basic C programming concepts
//! 5.Write a program to calculate power using loop.

#include <stdio.h>

void main()
{
    int num, power;
    int temp = 1; //* Initialize result to 1 for any number raised to the power of 0

    printf("Enter The Number You want to get power : ");
    scanf("%d", &num);
    printf("Enter The Power value : ");
    scanf("%d", &power);

    for (int i = 1; i <= power; i++)
    {
        temp = temp * num; //* Multiply the result by num in each iteration
    }
    printf("The power of %d is : %d", num, temp);
}