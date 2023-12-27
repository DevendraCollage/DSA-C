//* Hands on practice to get familiar with basic C programming concepts
//! 4.Write a program to find GCD (Greatest Common Divisor) using recursion.

#include <stdio.h> //? Standard Input Output

int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}
void main()
{
    int num1, num2;
    printf("Enter The Number 1 Here : ");
    scanf("%d", &num1);
    printf("Enter The Number 2 Here : ");
    scanf("%d", &num2);
    // ? Find the Greatest Common Divisor (GCD) using a recursion
    printf("The Greatest Common Divisor of %d and %d is : %d\n", num1, num2, gcd(num1, num2));
}