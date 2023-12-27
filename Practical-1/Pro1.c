//* Hands on practice to get familiar with basic C programming concepts
//! 1.Write a program to find factorial of a number using loop.

#include <stdio.h> //? Standard Input Output
void main()
{
    int fact = 1;
    int num;
    printf("Enter The Number here to find Factorial of : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("The Factorial of %d is : %d", num, fact);
}