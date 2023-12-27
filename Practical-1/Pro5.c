//* Hands on practice to get familiar with basic C programming concepts
//! 4.Write a program to 􀆒nd GCD (Greatest Common Divisor) using loop.

#include <stdio.h> //? Standard Input Output

int main()
{
    int num1, num2, GCD, n;

    printf("Enter The Number 1 Here : ");
    scanf("%d", &num1);
    printf("Enter The Number 2 Here : ");
    scanf("%d", &num2);

    if (num1 > num2) //* If num1 is grater than num2 than stored in n variable
    {
        n = num2;
    }
    else //* If num1 is not grater than num2 than stored in n variable
    {
        n = num1;
    }

    //? Find the Greatest Common Divisor (GCD) using a loop
    for (int i = 1; i <= n; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            GCD = i; //? Update GCD when a common divisor is found
        }
    }
    printf("The GCD of %d and %d is : %d", num1, num2, GCD);

    return 0;
}