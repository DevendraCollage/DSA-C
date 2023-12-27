//* Hands on practice to get familiar with basic C programming concepts
//! 3.Write a program to check whether a number is prime or not.

#include <stdio.h> //? Standard Input Output

int main()
{
    int num;
    int flag = 1; //? Set the flag initially True

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        flag = 0; //? Numbers less than or equal to 1 are not prime
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 0; //? Set to false if a divisor is found
                break;
            }
        }
    }
    if (flag)
    {
        printf("The number is a Prime Number!\n");
    }
    else
    {
        printf("The number is not a Prime Number!\n");
    }
    return 0;
}
