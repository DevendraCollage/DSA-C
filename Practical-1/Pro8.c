//* Hands on practice to get familiar with basic C programming concepts
//! 5.Write a program to calculate power using recursion.

#include <stdio.h>
int Power(int num, int power)
{
    int temp = 1; //* Initialize result to 1 for any number raised to the power of 0
    for (int i = 1; i <= power; i++)
    {
        temp = temp * num; //* Multiply the result by num in each iteration
    }
    return temp;
}
void main()
{
    int num1, num2;

    printf("Enter The Number You want to get power : ");
    scanf("%d", &num1);
    printf("Enter The Power value : ");
    scanf("%d", &num2);

    printf("The power of %d is : %d", num1, Power(num1, num2));
}