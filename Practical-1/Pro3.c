//* Hands on practice to get familiar with basic C programming concepts
//! 2.Write a program to find factors of a given number.

#include <stdio.h> //? Standard Input Output
void main()
{
    int num;
    printf("Enter The Number to find the factors : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d,", i);
        }
    }
}