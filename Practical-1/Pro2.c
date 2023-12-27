//* Hands on practice to get familiar with basic C programming concepts
//! 1.Write a program to find factorial of a number using recursion.

#include <stdio.h> //? Standard Input Output
int Factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        num = num * Factorial(num - 1);
    }
}
void main()
{
    int UserInput;
    printf("Enter The Number here find Factorial of : ");
    scanf("%d", &UserInput);

    if (UserInput < 0)
    {
        printf("The factorial is not defined for negative numbers!");
    }
    else
    {
        int number = Factorial(UserInput);
        printf("The Factorial of %d is : %d", UserInput, number);
    }
}